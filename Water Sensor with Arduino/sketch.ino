const int waterSensorPin = A0; // Water sensor pin
const int ledPin = 13;         // LED pin for alert

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int waterLevel = analogRead(waterSensorPin);

  if (waterLevel > 500) { // Adjust threshold as needed
    digitalWrite(ledPin, HIGH); // Turn on LED if water is detected
    Serial.println("Water detected!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No water detected.");
  }
  delay(1000);
}
