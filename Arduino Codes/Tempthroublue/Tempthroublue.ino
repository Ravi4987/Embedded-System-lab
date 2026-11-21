void setup() {
  
Serial.begin(9600);
}

void loop() {
  
int AN=analogRead(A0);
  int AN1=analogRead(A1);
  
  int voltage=AN*5.0/1023;
  int TEMP=AN*4.88/10;
  
  //if(Serial.available()>0)
  //{
  
  Serial.print("Tempreture:");
  Serial.print(TEMP);
  Serial.println("*C");
  delay(1000);
  
  
  //}
  
}
