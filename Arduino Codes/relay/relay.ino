void setup() {
  pinMode(3,OUTPUT);
  pinMode(1,INPUT);
  pinMode(2,INPUT);

}

void loop() {
  int S1=digitalRead(2);
  int S2=digitalRead(1);
  if(S1==LOW && S2==HIGH)
  {
  digitalWrite(3,HIGH);
  }
  
  if(S2==LOW && S1==HIGH)
  {
  
  digitalWrite(3,LOW);
  
  }


}
