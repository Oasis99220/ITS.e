int led1 = 4;
void setup() {
  pinMode(led1, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  digitalWrite(led1, LOW);
  Serial.println (" spento");
  delay(100);
  digitalWrite(led1, HIGH);
  Serial.println ("acceso");
  delay(500);
  digitalWrite(led1, LOW);
  Serial.println (" spento2");
  delay(100);
  digitalWrite(led1, HIGH);
  Serial.println ("acceso2");
  delay(100);
   digitalWrite(led1, LOW);
  Serial.println (" spento3");
  delay(100);
  digitalWrite(led1, HIGH);
  Serial.println ("acceso3");
  delay(100);
   digitalWrite(led1, LOW);
  Serial.println (" spento4");
  delay(100);
  digitalWrite(led1, HIGH);
  Serial.println ("acceso4");
  delay(100);
}
