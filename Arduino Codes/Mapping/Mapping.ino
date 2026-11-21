void setup() {
  Serial.begin(9600);

}

void loop() {

  int i=analogRead(A0);
  i=map(i,0,1023,0,255);
  Serial.println(i);
  
  delay(1000);
  
}
