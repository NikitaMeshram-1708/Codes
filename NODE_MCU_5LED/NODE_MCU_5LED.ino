
#define LED1 D0
#define LED2 D1
#define LED3 D2
#define LED4 D3
#define LED5 D4
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);

}

void loop()
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED4,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED1,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED4,HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
