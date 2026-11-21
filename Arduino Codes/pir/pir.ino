void setup() {
pinMode(2,INPUT);
pinMode(8,OUTPUT);
Serial.begin(9600);

}

void loop() {
  if(digitalRead(2)==HIGH)
  {
  
  digitalWrite(8,HIGH);
  Serial.println("Motion detected");
  delay(1000);
  
  }
  else
{
digitalWrite(8,LOW);


}

}
