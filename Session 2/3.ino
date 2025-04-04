int ledGreen 3;
int ledYellow = 4;
int ledRed = 5;

voidsetup() {
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

voidloop(){
  digitalWrite(ledGreen, HIGH);
  delay(2000);
  digitalWrite(ledGreen, LOW);

  digitalWrite(ledYellow, HIGH);
  delay(1000);
  digitalWrite(ledYellow, LOW);

  digitalWrite(ledRed, HIGH);
  delay(2000);
  digitalWrite(ledRed, LOW);
}
