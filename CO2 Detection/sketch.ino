const int co2Pin = A0; // CO2 sensor pin
const int ledPin = 9;  // LED pin

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(co2Pin);
  if (sensorValue > 300) { // Adjust threshold for CO2 detection
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }
}
