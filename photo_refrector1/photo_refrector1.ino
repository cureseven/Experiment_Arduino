void setup() {
  analogReference(DEFAULT);
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  float V;
  val=analogRead(A0);
  V=(float)val/1023*5;
    if(V>=4){
    digitalWrite(10,1);
    digitalWrite(11,1);
    digitalWrite(12,1);
    digitalWrite(13,1);
   }
   if(V>=3&&V<4){
    digitalWrite(10,1);
    digitalWrite(11,1);
    digitalWrite(12,1);
  }
  if(V>=2&&V<3){
    digitalWrite(10,1);
    digitalWrite(11,1);
  }
  if(V>=1&&V<=2){
    digitalWrite(10,1);
  }
  Serial.println(V);
 delay(1000);
 digitalWrite(10,0);
 digitalWrite(11,0);
 digitalWrite(12,0);
 digitalWrite(13,0);

}
