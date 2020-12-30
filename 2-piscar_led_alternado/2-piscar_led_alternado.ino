void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  int intervaloIda;
  int intervaloPisca;
  
  intervaloIda = 500;
  intervaloPisca = 200;

  digitalWrite(10, HIGH);
  delay(intervaloIda);

  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(intervaloIda);

  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(intervaloIda);

  digitalWrite(8, LOW);
  delay(intervaloPisca);
  digitalWrite(8, HIGH);
  delay(intervaloIda);
  
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(intervaloIda);

  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(intervaloIda);

  digitalWrite(10, LOW);
  delay(intervaloPisca);
 
}
