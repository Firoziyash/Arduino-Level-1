const int soundSensorPin = A0; // Sound sensor pin
const int ledPin = 9;           // LED pin

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(soundSensorPin);
  if (sensorValue > 200) { // Adjust the threshold as needed
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }
}
