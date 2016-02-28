/*This code is replaced by bulk_daq.ino
Author: Ananth J
email: ajonnavittula@wpi.edu
Copyrights: Popovic Labs*/

// #include<
char inData[20]; // Allocate some space for the string
char inChar=-1; // Where to store the character read
byte index = 0; // Index into array; where to store the character
String str,an="ang",le="len",fl="flo",pr="pre"; 

 void setup() 
 {
  // put your setup code here, to run once:
 Serial.begin(115200,SERIAL_8N1);
 while(!Serial);
// Serial.println("serial port ready");
  an +='\n';
  le +='\n';
  fl +='\n';
  pr +='\n'; 
 }
 
void loop()
{       
        while (Serial.available() > 0) // Don't read unless                               // there you know there is data
        {
        str = Serial.readString();
//        Serial.println(str);
        }
        if(an==str) 
          {
           int out_angle=get_angle();
//           Serial.println("out_angle"); 
           Serial.write(out_angle);
           Serial.println();
          }
        if(le==str) 
          {
            int out_length[10],test;
            test=65;
//            Serial.println("out_length");
            for(int i=0;i<=10;i++)
            {
            out_length[i]=get_length();
            Serial.write(out_length[i]/256);
            Serial.write(out_length[i]%256);
            Serial.print('\n');
            }
//          Serial.write(test);
          }
 
        if(pr==str) 
          {
//            Serial.println("out_pre");
            int out_pres=get_pres();
//            Serial.write(out_pres,2);
            Serial.println(); 
          }

        if(fl==str) 
          {
//            Serial.println("out_flo");
            int out_flow=get_flow();
            Serial.write(out_flow);
            Serial.println(); 
          }
 
    str="";
 }

int get_angle()
{
  int angle=20;
  return angle;
}
int get_length()
{
  int len;
  len=1020;
  return len;
}
int get_pres()
{
  int pres=10;
  return pres;
}
int get_flow()
{
  int flow=40;
  return flow;
}

