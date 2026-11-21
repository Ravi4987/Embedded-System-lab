//#include <SoftwareSerial.h>
//SoftwareSerial sim(9,10); 
void setup() {
  
  //sim.begin(9600);
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  
  Serial.print("AT");
  Serial.print("\r");
  delay(1000);
  delay(1000);
  Serial.print("AT+CMGF=1");
  Serial.print("\r");
  delay(1000);
  Serial.print("AT+CMGS=");  
  Serial.print("");
  Serial.print("7508658150");
  Serial.print("\r");
  Serial.println("Hi");
  Serial.write(26);
   delay(1000); 
}
