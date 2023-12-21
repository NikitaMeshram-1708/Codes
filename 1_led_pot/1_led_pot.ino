#define LED D0
void setup() {
 pinMode(LED,OUTPUT);
 pinMode(A0,INPUT);
 Serial.begin(9600);
}

void loop() {
  int x=(analogRead(A0));
  Serial.println(x);
  if (x>0 && x<500)
  {
    digitalWrite(LED,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(LED,LOW);
  }
}
