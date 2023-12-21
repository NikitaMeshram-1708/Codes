const int SENSOR_PIN =D1;
const int LED = D3;
const int LED1 = D6;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the Arduino's pin as aninput
  pinMode(SENSOR_PIN, INPUT);
  pinMode(LED,OUTPUT);
  pinMode(LED1,OUTPUT);
}
void loop() {
  // read the state of the the input pin:
  int state = digitalRead(SENSOR_PIN);
  if(state==LOW)
  {
    Serial.println("The obstacle is present");
    
    digitalWrite(LED,HIGH);
    digitalWrite(LED1,LOW);
    
    }
    else
    {
    Serial.println("The obstacle is NOT present");
    
      digitalWrite(LED,LOW);
      digitalWrite(LED1,HIGH);
    }
  delay(1000);
}
