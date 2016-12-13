void setup() {
pinMode(2,INPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
  int i =0;
  unsigned char a;
  a=digitalRead(2);
  for(i=0;i<4;i++){
    a=digitalRead(2);
    digitalWrite((10+i)*(1-a)+(13-i)*a,1);
    delay(500);
    digitalWrite((10+i)*(1-a)+(13-i)*a,0);
  }
}
