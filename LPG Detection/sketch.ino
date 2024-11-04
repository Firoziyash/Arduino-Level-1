const int lpgPin = A0; // LPG sensor pin
const int ledPin = 9;  // LED pin

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(lpgPin);
  if (sensorValue > 300) { // Adjust threshold for LPG detection
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }
}
