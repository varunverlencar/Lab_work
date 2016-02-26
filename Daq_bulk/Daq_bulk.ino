String act_str="";
int ang,len1,len2,pre1,pre2,pump;
void setup() 
{
  Serial.begin(115200);
  char AnPins[6]={A0,A1,A2,A3,A4,A5};
   for(int i=0;i<=5;i++)
  {
    pinMode(AnPins[i],INPUT);
  }
  pinMode(3,OUTPUT);
  while(!Serial);
  Serial.setTimeout(1);
}

void loop() 
{
  String d_send = "send";
  String d_rece = "read";
  d_send +='\n';
  d_rece +='\n';
  ang=110;
  len1=10;
  len2=20;
  pre1=15;
  pre2=80;
  pump=11;
  
  char d_data[10]={};
  int i_data[5]={ang,len1,len2,pre1,pre2};
  char S_data[10]={};

  S_data[0]=char(i_data[0]/256);
  S_data[1]=char(i_data[0]%256);
  S_data[2]=char(i_data[1]/256);
  S_data[3]=char(i_data[1]%256);
  S_data[4]=char(i_data[2]/256);
  S_data[5]=char(i_data[2]%256);
  S_data[6]=char(i_data[3]/256);
  S_data[7]=char(i_data[3]%256);
  S_data[8]=char(i_data[4]/256);
  S_data[9]=char(i_data[4]%256);


  if (Serial.available() > 0)
    {
      act_str = Serial.readString(); 
      if(act_str == d_send) 
      { 
            Serial.readBytes(d_data,10);  
            // Actuation code
       }
   else if (act_str == d_rece)
    {
          //Data acquisition from sensors code
          Serial.write(S_data,10);
          Serial.print("\n");
    }
   act_str="";
    }
    else
    {
//      Serial.println("nothing received");
    }
}
