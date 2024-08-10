#define lm35p A0

void setup(){
  Serial.begin(9600);
}

void loop(){
  delay(2000);
  int adcval=analogRead(lm35p);
  int eqv=(adcval*4.88);
  int tc=(eqv/10);
  int tf=(((9*tc)/5)+32);
  Serial.print("Temperature in C: ");
  Serial.println(tc);
  Serial.print("Temperature in F: ");
  Serial.print(tf);
}