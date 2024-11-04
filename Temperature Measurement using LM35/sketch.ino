const int lm35Pin = A0; // LM35 sensor pin

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(lm35Pin);
  float temperature = sensorValue * (5.0 / 1023.0) * 100; // Convert to Celsius
  Serial.print("Temperature: ");
  Serial.println(temperature);
  delay(1000);
}
