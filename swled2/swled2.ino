void setup() {
  pinMode(10,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  pinMode(11,OUTPUT);
  pinMode(3,INPUT);
  pinMode(12,OUTPUT);
  pinMode(4,INPUT);
  pinMode(13,OUTPUT);
  pinMode(5,INPUT);



}

void loop() {
  unsigned char a,b,c,d;
  a= digitalRead(2);
  b= digitalRead(3);
  c= digitalRead(4);
  d= digitalRead(5);
  digitalWrite(10,a-1);
  digitalWrite(11,b);
  digitalWrite(12,c);
  digitalWrite(13,d);
}
