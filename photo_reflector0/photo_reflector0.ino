void setup() {
  analogReference(DEFAULT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  float V;
  val=analogRead(A0);
  V=(float)val/1023*5;
  Serial.println(V);
  delay(500);

}
