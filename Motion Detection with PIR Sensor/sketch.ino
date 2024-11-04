const int pirPin = 2; // PIR sensor pin
const int ledPin = 13; // LED pin

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motionDetected = digitalRead(pirPin);

  if (motionDetected == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on LED if motion is detected
    Serial.println("Motion detected!");
    delay(5000); // Keep LED on for 5 seconds
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(500);
}
