const int SENSOR_PIN =D1;
const int LED = D3;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the Arduino's pin as aninput
  pinMode(SENSOR_PIN, INPUT);
  pinMode(LED,OUTPUT);
}
void loop() {
  // read the state of the the input pin:
  int state = digitalRead(SENSOR_PIN);
  if(state==LOW)
  {
    Serial.println("The obstacle is present");
    
    digitalWrite(LED,HIGH);
    }
    else
    {
    Serial.println("The obstacle is NOT present");
    
      digitalWrite(LED,LOW);
    }
  delay(1000);
}
