int PIN_Vref=6;
int PIN_IN1=7;
int PIN_IN2=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_IN1,OUTPUT);
  pinMode(PIN_IN1,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_IN1,0);
  digitalWrite(PIN_IN2,0);
  delay(2000);
  digitalWrite(PIN_IN1,0);
  digitalWrite(PIN_IN2,1);
  for(int D=0;D<=255;D+=127){
    analogWrite(PIN_Vref,D);
    delay(2000);
  }
  digitalWrite(PIN_IN1,0);
  digitalWrite(PIN_IN2,0);
  delay(2000);
  digitalWrite(PIN_IN1,1);
  digitalWrite(PIN_IN2,0);
  for(int D=0;D<=255;D+=127){
    analogWrite(PIN_Vref,D);
    delay(2000);
  }
  
}
