int PIN_Vref=6;
int PIN_IN1=7;
int PIN_IN2=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_IN1,OUTPUT);
  pinMode(PIN_IN1,OUTPUT);
  digitalWrite(PIN_IN1,HIGH);
  digitalWrite(PIN_IN2,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int D=0;D<=255;D+=127){
    analogWrite(PIN_Vref,D);
    delay(2000);
  }
}z
