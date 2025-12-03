int mq9Pin = A0; 
int gasThreshold = 500; 
int led = 13;
void setup() {
  Serial.begin(9600); 
  Serial.println("MQ9 Gas Sensor Test");
  pinMode(led, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(mq9Pin); 
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue); 
  
if (sensorValue > gasThreshold) {
    Serial.println("GAS DETECTED!"); 
    digitalWrite(led,HIGH);
    }
    else{
      digitalWrite(led, LOW);
    }
  delay(1000); 
}
