#include <ESP8266WiFi.h>
void setup()
{
 pinMode(D4,OUTPUT);
    pinMode(D5,OUTPUT);
    pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
  pinMode(D2,INPUT_PULLUP);
}

void loop()
{
 int x= digitalRead(D2);
  if(x==0)
  {
     digitalWrite(D4,HIGH);
  digitalWrite(D5,LOW);
    digitalWrite(D6,HIGH);
    digitalWrite(D7,LOW);
  }
  else
  {
    digitalWrite(D4,LOW);
  digitalWrite(D5,HIGH);
    digitalWrite(D6,LOW);
    digitalWrite(D7,HIGH);
}

}
