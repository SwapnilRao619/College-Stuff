#define lp 8

void setup(){
  pinMode(lp,OUTPUT);
}

void loop(){
  digitalWrite(lp,HIGH);
  delay(1000);
  digitalWrite(lp,LOW);
  delay(1000);
}