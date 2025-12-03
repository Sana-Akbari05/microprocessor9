int mq9DigitalPin = 2;
int ledPin = 13;
void setup() {
  pinMode(mq9DigitalPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("MQ9 Digital Output Test");
}

void loop() {
  int gasDetected = digitalRead(mq9DigitalPin);

  if (gasDetected == HIGH) {
    Serial.println("GAS DETECTED!");
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH);
  }

  delay(500);
}
