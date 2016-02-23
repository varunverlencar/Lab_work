
#include <Servo.h>
#include <stdlib.h>

String act_str,c1e="c1e",c1d="c1d",c2e="c2e",c2d="c2d",s1_on="s1_on",s1_off="s1_off",s2_on="s2_on",s2_off="s2_off",s3_on="s3_on",s3_off="s3_off",s4_on="s4_on",s4_off="s4_off",v1="v1",v2="v2",v3="v3",v4="v4"; 
Servo c1_servo,c2_servo,v1_servo,v2_servo,v3_servo,v4_servo;
int positions[2]={60,60},c_servos[2]={1,2},p1=0,p2=0;

void setup() 
{
  for(int i=0;i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
  Serial.begin(115200);
  while(!Serial);
  Serial.println("serial port ready");
  c1e +='\n';
  c1d +='\n';
  c2e +='\n';
  c2d +='\n';
  s1_on+='\n';
  s1_off+='\n';
  s2_on+='\n';
  s2_off+='\n';
  s3_on+='\n';
  s3_off+='\n';
  s4_on+='\n';
  s4_off+='\n';
  v1+='\n';
  v2+='\n';
  v3+='\n';
  v4+='\n';

  c1_servo.attach(3);
  c2_servo.attach(4);
  v1_servo.attach(6);
  v2_servo.attach(9);
  v3_servo.attach(10);
  v4_servo.attach(11);
}

void loop() 
{
  if (Serial.available() > 0)
    {
      act_str = Serial.readStringUntil('\n');
    }
  if(act_str==c1e) 
          { 
            Serial.println("Opening servo 1");
            p1=run_servo(c_servos[1],p1);
            
          }
   if(act_str==c1d) 
          {
            Serial.println("Closing servo 1");
            p1=run_servo(c_servos[1],p1);
          }
  if(act_str==c2e) 
          { 
            Serial.println("Opening servo 2");
            p2=run_servo(c_servos[2],p2);
            
          }
   if(act_str==c2d) 
          {
            Serial.println("Closing servo 2");
            p2=run_servo(c_servos[2],p2);
          }
   if (act_str==s1_on)
          {
           act_valve(1,1);
           Serial.println("Opened solenoid valve 1");
          }
   if (act_str==s1_off)
          {
           act_valve(1,0);
           Serial.println("Closed solenoid valve 1");
          }
   if (act_str==s2_on)
          {
           act_valve(2,1);
           Serial.println("Opened solenoid valve 2");
          }
    if (act_str==s2_off)
          {
           act_valve(2,0);
           Serial.println("Closed solenoid valve 2");
          }
  
   if (act_str==s3_on)
          {
           act_valve(3,1);
           Serial.println("Opened solenoid valve 3");
          }
    if (act_str==s3_off)
          {
           act_valve(3,0);
           Serial.println("Closed solenoid valve 3");
          }
  
   if (act_str==s4_on)
          {
           act_valve(4,1);
           Serial.println("Opened solenoid valve 4");
          }
    if (act_str==s4_off)
          {
           act_valve(4,0);
           Serial.println("Closed solenoid valve 4");
          }
     if (act_str.substring(1,2)==v1)
          {
            double ang_val;
            char step_ang[2];
            act_str.substring(3,4).toCharArray(step_ang,2);
            ang_val=(int) step_ang; 
            val_setpos(1,ang_val);
            Serial.println("Valve 1 set to position");
            }
      if (act_str.substring(1,2)==v2)
          {
            double ang_val;
            char step_ang[2];
            act_str.substring(3,4).toCharArray(step_ang,2);
            ang_val=(int) step_ang; 
            val_setpos(2,ang_val);
            Serial.println("Valve 2 set to position");
            }
      if (act_str.substring(1,2)==v3)
          {
            double ang_val;
            char step_ang[2];
            act_str.substring(3,4).toCharArray(step_ang,2);
            ang_val=(int) step_ang; 
            val_setpos(3,ang_val);
             Serial.println("Valve 3 set to position");
            }
      if (act_str.substring(1,2)==v4)
          {
            double ang_val;
            char step_ang[2];
            act_str.substring(3,4).toCharArray(step_ang,2);
            ang_val=(int) step_ang; 
            val_setpos(4,ang_val);
             Serial.println("Valve 4 set to position");
            }
        else 
        Serial.println("Invalid input string");
       
   act_str="";
  
}
void val_setpos(int val_no,int angle)
{
  if (val_no==1)
  {
    v1_servo.write(angle);
  }
  if (val_no==2)
  {
    v2_servo.write(angle);
  }
  if (val_no==3)
  {
    v3_servo.write(angle);
  }
  if (val_no==4)
  {
    v4_servo.write(angle);
  }
}
int run_servo(int ser_no,int ser_pos)
{ 
 if (ser_no==1)
 {   
   if (ser_pos==0)
    {
      c1_servo.write(positions[2]);
      ser_pos=1;
    }
   if (ser_pos==1)
    {
      c1_servo.write(positions[1]);
      ser_pos=0;
    }
 }
 if (ser_no==2)
 {   
   if (ser_pos==0)
    {
      c2_servo.write(positions[2]);
      ser_pos=1;
    }
   if (ser_pos==1)
    {
      c2_servo.write(positions[1]);
      ser_pos=0;
    }
 }
  return ser_pos;
}
void act_valve(int val_no,int state)
{
  if(val_no==1)
  {
    if (state==0)
      {
        digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
      }
    if (state==1)
      {
        digitalWrite(0,LOW);
        digitalWrite(1,HIGH);
      }
  }
  if(val_no==2)
  {
    if (state==0)
      {
        digitalWrite(2, HIGH);
        digitalWrite(4, LOW);
      }
    if (state==1)
      {
        digitalWrite(2,LOW);
        digitalWrite(4,HIGH);
      }
  }
  if(val_no==3)
  {
    if (state==0)
      {
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
      }
    if (state==1)
      {
        digitalWrite(7,LOW);
        digitalWrite(8,HIGH);
      }
  }
  if(val_no==4)
  {
    if (state==0)
      {
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
      }
    if (state==1)
      {
        digitalWrite(12,LOW);
        digitalWrite(13,HIGH);
      }
  }
}

