const int buttonPin1 = 2; // Button 1
const int buttonPin2 = 3; // Button 2
const int ledPin1 = 9;     // LED 1
const int ledPin2 = 10;    // LED 2

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin1) == HIGH) {
    digitalWrite(ledPin1, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
  }

  if (digitalRead(buttonPin2) == HIGH) {
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin2, LOW);
  }
}
