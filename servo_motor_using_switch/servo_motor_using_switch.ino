#include <Servo.h>
Servo nameServo;
  void setup()
{
  nameServo.attach(5);
  pinMode(4,INPUT);
}

void loop(){
 int x=digitalRead(4);
 if(x==1)
 {
  nameServo.write(180);
  delay(1000); // Wait for 1000 millisecond(s)
 }
 else{
  nameServo.write(90);
  delay(1000); // Wait for 1000 millisecond(s)
   }
}
