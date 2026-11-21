void setup() {
Serial.begin(9600);
pinMode(6,INPUT);
pinMode(8,OUTPUT);
}

void loop() {

  int i=digitalRead(6);
  
  if(i==0)
  {
  digitalWrite(8,1);
  Serial.println("Metal detected");
  delay(1000);
  }
  
  else
  {
      digitalWrite(8,0);
  Serial.println("No Metal detected");
  delay(1000);
  }
  
  
  
  
  
  
  
}
