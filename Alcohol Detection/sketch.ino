const int alcoholPin = A0; // Alcohol sensor pin
const int ledPin = 9;      // LED pin

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(alcoholPin);
  if (sensorValue > 300) { // Adjust threshold for alcohol detection
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }
}
