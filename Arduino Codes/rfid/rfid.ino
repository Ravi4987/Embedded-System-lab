char rfid_token[13];
char rfid_ref[13]="654321654321";
void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  if(Serial.available()>0)
{ 
  
  Serial.readBytesUntil('\0',rfid_token,12);
  Serial.println(rfid_token);
  if(!(strcmp(rfid_token,rfid_ref)))
  {
  
    Serial.println("code is correct");
    digitalWrite(13,1);
    delay(500);
  
  }
  else
  {
  
      Serial.println("code is incorrect");
      digitalWrite(13,0);
      delay(500);
  
  }
  
}
}
