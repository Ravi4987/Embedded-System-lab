void setup() {
pinMode(13,OUTPUT);
Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0)
  {
  
  char d=Serial.read();
  
  switch(d)
  {
  
  case 'o':
  digitalWrite(13,HIGH);
  break;
  
  
  case 'f':
  digitalWrite(13,LOW);
  break;
  
  
  }
  
  
  
  }

}
