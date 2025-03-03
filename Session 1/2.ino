int inPin = 7;
int val = 0;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  val = digitalRead(inPin);
  digitalWrite(LED_BUILTIN, val);
}
