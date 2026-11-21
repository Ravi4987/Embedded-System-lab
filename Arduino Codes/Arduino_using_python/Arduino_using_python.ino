void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);

}

void loop() {
  if(Serial.available()>0)
  {
    int i=Serial.read();

    if(i=='1')
    {
      
      digitalWrite(13,1);
      
      
      }
    if(i=='0')
    {
      
      digitalWrite(13,0);
      
      
      }
    
    
    
    
    }

}
