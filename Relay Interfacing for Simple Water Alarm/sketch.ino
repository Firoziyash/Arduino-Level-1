const int waterSensorPin = A0; // Water sensor pin
const int relayPin = 8;        // Relay pin

void setup() {
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int waterLevel = analogRead(waterSensorPin);

  if (waterLevel > 500) { // Adjust threshold as needed
    digitalWrite(relayPin, HIGH); // Activate relay
    Serial.println("Water detected!");
  } else {
    digitalWrite(relayPin, LOW);  // Deactivate relay
    Serial.println("No water detected.");
  }
  delay(1000);
}
