int inPin = 8;
int ledPin = 2;
int val = 0;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  val = digitalRead(inPin);
  if (val == HIGH)
  {
  digitalWrite(ledPin, HIGH);
  }
  else
  {
  digitalWrite(ledPin, LOW);
  }
}
