void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  double d;
  d = 1*digitalRead(2)+2*digitalRead(3)+3*digitalRead(4)+4*digitalRead(5);
  double D = d/4 *255;
  analogWrite(10,D);
  analogWrite(11,D);
  analogWrite(12,D);
  analogWrite(13,D);
}
