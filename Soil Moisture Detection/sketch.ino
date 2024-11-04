const int sensorPin = A0; // Soil moisture sensor pin
const int ledPin = 9;     // LED pin

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int moistureValue = analogRead(sensorPin);
  if (moistureValue < 300) { // Adjust threshold for dry soil
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }
}
