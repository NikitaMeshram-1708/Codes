
#define LED D0
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(D4, INPUT);
}

void loop()
{
  int x=digitalRead(D4);
  if (x==1)
  {
  digitalWrite(LED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
 else
{
  digitalWrite(LED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
}
