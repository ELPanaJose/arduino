#define rojo 5
#define amarillo 6
#define verde 7

void setup() {
  pinMode(verde,OUTPUT);
  pinMode(rojo,OUTPUT);
  pinMode(amarillo,OUTPUT);
}

void loop() {
  digitalWrite(rojo,LOW);
  digitalWrite(verde,HIGH);
  delay(500);
  digitalWrite(amarillo,HIGH);
  digitalWrite(verde,LOW);
  delay(1000);
  digitalWrite(verde,LOW);
  digitalWrite(rojo,HIGH);
  delay(1500);
}
