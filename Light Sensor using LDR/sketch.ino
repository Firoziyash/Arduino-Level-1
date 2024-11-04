const int ldrPin = A0; // LDR pin
const int ledPin = 9;  // LED pin

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  if (ldrValue < 500) { // Adjust threshold for darkness
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
