/* This is test code
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.

 Serial.begin(9600);
 while(!Serial);
 Serial.println("serial port ready");

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
 
  int a=0;
  if(Serial.available() > 0)
  {

    a=Serial.read();
    Serial.println("something received");
    Serial.println(a);
  
    if(a==48)
    {
      digitalWrite(12, HIGH);// turn the LED off by making the voltage LOW
      digitalWrite(13,LOW);
      digitalWrite(10, HIGH);// turn the LED off by making the voltage LOW
      digitalWrite(11,LOW);
      delay(1000);    // wait for a second
      digitalWrite(13, HIGH);// turn the LED on (HIGH is the voltage level)
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);// turn the LED on (HIGH is the voltage level)
      digitalWrite(10, LOW);
    
    }
  
    else if(a==49)
    {
//      delay(1000);    // wait for a second
      digitalWrite(13, HIGH);// turn the LED on (HIGH is the voltage level)
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);// turn the LED on (HIGH is the voltage level)
      digitalWrite(10, LOW);
      delay(1000);
    digitalWrite(12, HIGH);// turn the LED off by making the voltage LOW
    digitalWrite(13,LOW);
    digitalWrite(10, HIGH);// turn the LED off by making the voltage LOW
    digitalWrite(11,LOW);
  

    }
  
//    else
//    {
//        
//    }
  //  delay(1000);
  //  digitalWrite(12, HIGH);// turn the LED off by making the voltage LOW
  //  digitalWrite(13,LOW);
  //  digitalWrite(10, HIGH);// turn the LED off by making the voltage LOW
  //  digitalWrite(11,LOW);
  
  
  //  while(1);
  
  } 
}
