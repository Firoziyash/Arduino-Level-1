const int vibrationPin = 2; // Vibration sensor pin
const int ledPin = 13;      // LED pin

void setup() {
  pinMode(vibrationPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int vibrationState = digitalRead(vibrationPin);

  if (vibrationState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on LED if vibration is detected
    Serial.println("Vibration detected!");
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(500);
}
