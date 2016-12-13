void setup() {
}

void loop() {
 for(double i=0;i<5;i++){
  double D = i/4 *255;
  analogWrite(10,D);
  delay(1000);
 }
}
