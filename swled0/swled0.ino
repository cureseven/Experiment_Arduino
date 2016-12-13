void setup() {
 pinMode(10,OUTPUT);
 pinMode(2,INPUT);
}

void loop() {
  unsigned char a;
  a = digitalRead(2);
  digitalWrite(10,a);
  
}
