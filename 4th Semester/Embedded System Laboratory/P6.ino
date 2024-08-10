#define lp1 13
#define lp2 12
#define lp3 11

void setup(){
  pinMode(lp1,OUTPUT);
  pinMode(lp2,OUTPUT);
  pinMode(lp3,OUTPUT);
}

void loop(){
  digitalWrite(lp1,HIGH);
  digitalWrite(lp2,LOW);
  digitalWrite(lp3,LOW);
  delay(1000);
  digitalWrite(lp1,LOW);
  digitalWrite(lp2,HIGH);
  digitalWrite(lp3,LOW);
  delay(1000);
  digitalWrite(lp1,LOW);
  digitalWrite(lp2,LOW);
  digitalWrite(lp3,HIGH);
  delay(1000);
}