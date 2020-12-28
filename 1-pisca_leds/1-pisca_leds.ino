void setup() {

  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {

  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(250);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  delay(250);

}
