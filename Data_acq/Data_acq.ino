// #include<
char inData[20]; // Allocate some space for the string
char inChar=-1; // Where to store the character read
byte index = 0; // Index into array; where to store the character
String str; 
 void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
 while(!Serial);
 Serial.println("serial port ready");
 
}
char Comp(char* This) {
    byte index = 0;
    if (Serial.available() > 0) // Don't read unless                               // there you know there is data
    {
        str = Serial.readStringUntil('\n');
//        x = Serial.parseInt();
//        if(index < 19) // One less than the size of the array
//        {
//            inChar = Serial.read(); // Read a character
//            inData[index] = inChar; // Store it
//            index++; // Increment where to write next
//            inData[index] = '\0'; // Null terminate the string
//        }
    Serial.println(str);
    str.toCharArray(inData,3);
    if (strcmp(inData,This)  == 0) {
      for (int i=0;i<19;i++) 
      {
            inData[i]=0;
      }
        index=0;
        return(0);
    }
    else {
        return(1);
    }
}
}
void loop()
{        
        if(Comp("ang")==0) 
          {
            int out_angle=get_angle();
//            Serial.write(out_angle); 
          }
        if(Comp("len")==0) 
          {
            int out_length[10],test;
            test=65;
            for(int i=0;i<=10;i++)
            {
            out_length[i]=get_length();
             
            }
//          Serial.write(test);
          }
 
        if(Comp("pre")==0) 
          {
            int out_pres=get_pres();
//            Serial.write(out_pres); 
          }

        if(Comp("flo")==0) 
          {
            int out_flow=get_flow();
//            Serial.write(out_flow); 
          }
 
 }

int get_angle()
{
  int angle=20;
  return angle;
}
int get_length()
{
  int len;
  len=1;
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

