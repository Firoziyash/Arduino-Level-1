const int irSensorPin = 2; // IR sensor pin
const int ledPin = 13;     // LED pin

void setup() {
  pinMode(irSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int objectDetected = digitalRead(irSensorPin);

  if (objectDetected == LOW) { // Object is detected if IR sensor is LOW
    digitalWrite(ledPin, HIGH); // Turn on LED
    Serial.println("Object detected!");
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(500);
}
