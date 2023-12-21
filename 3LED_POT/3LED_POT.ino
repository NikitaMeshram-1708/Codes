#define LED D0
#define LED1 D4
#define LED2 D5
void setup() {
 pinMode(LED,OUTPUT);
 pinMode(LED1,OUTPUT);
 pinMode(LED2,OUTPUT);
 pinMode(A0,INPUT);
 Serial.begin(9600);
}

void loop() {
  int x=(analogRead(A0));
  Serial.println(x);
  if (x>0 && x<500)
  {
    digitalWrite(LED,HIGH);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    
  }
  else if(x>500 && x<700)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED,LOW);
    digitalWrite(LED2,LOW);
   
  }
  else (x>700 && x<1000);
  {
   digitalWrite(LED2,HIGH);
   digitalWrite(LED,LOW);
   digitalWrite(LED1,LOW);
   
  }
}
