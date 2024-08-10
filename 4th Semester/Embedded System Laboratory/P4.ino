#define lp 3
#define pp A1
int pv,brightness;

void setup(){
  pinMode(lp,OUTPUT);
}

void loop(){
  pv=analogRead(pp);
  brightness=pv/4;
  analogWrite(lp,brightness);
}