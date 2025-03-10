int inPin = 4;
int ledPin = 2;
void setup() {
  pinMode(inPin, INPUT_PULLUP);
}

void loop() {
  int val = digitalRead(inPin);
  if (val == LOW)
  {
  digitalWrite(ledPin, HIGH);
  }
  else
  {
  digitalWrite(ledPin, LOW);
  }
}
