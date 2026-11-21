

void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
    
 int i=analogRead(0);
  
  Serial.println(i);
  delay(200);
  
  if(i>800)
  {
  digitalWrite(13,HIGH);
  
  }
  else
  {
  
  digitalWrite(13,LOW);
  }
  
  
  
  
  
}
