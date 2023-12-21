#include <Servo.h>
Servo servo;
  void setup()
{
  servo.attach(D7);
}

void loop()
{
  servo.write(90);
  delay(1000); // Wait for 1000 millisecond(s)
  servo.write(180);
  delay(1000); // Wait for 1000 millisecond(s)
}
