#define lp1 D0
#define lp2 D2

void setup(){
  pinMode(lp1,OUTPUT);
  pinMode(lp2,OUTPUT);
}

void loop(){
  digitalWrite(lp1,HIGH);
  delay(300);
  digitalWrite(lp1,LOW);
  delay(300);
  digitalWrite(lp2,HIGH);
  delay(300);
  digitalWrite(lp2,LOW);
  delay(300);
}