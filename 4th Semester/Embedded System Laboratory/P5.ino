#define bp 9

void setup(){
  pinMode(bp,OUTPUT);
}

void loop(){
  tone(bp,1000);
  delay(1000);
  noTone(bp);
  delay(1000);
}