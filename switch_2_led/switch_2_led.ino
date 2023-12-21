void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);
}

void loop()
{
  int x=digitalRead(6);
  if (x==1)
  {
  digitalWrite(5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  }
  else{
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
}
