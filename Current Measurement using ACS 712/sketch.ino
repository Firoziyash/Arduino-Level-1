const int sensorPin = A0; // Current sensor pin

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  float current = (sensorValue - 512) * (5.0 / 1023.0) / 0.185; // Adjust for your ACS 712 version
  Serial.print("Current: ");
  Serial.println(current);
  delay(1000);
}
