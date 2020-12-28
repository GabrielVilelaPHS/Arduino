void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int intervaloIda;
  int intervaloVolta;
  
  intervaloIda = 500;
  intervaloVolta = 200;
  
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  delay(intervaloIda);

  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(intervaloIda);

  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(intervaloVolta);

  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  
  delay(intervaloIda);
  digitalWrite(8, LOW);
  delay(intervaloVolta);

  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(intervaloIda);

  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(intervaloIda);

  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  delay(intervaloVolta);

  delay(intervaloIda);
  digitalWrite(10, LOW);
  delay(intervaloVolta);

 
}
