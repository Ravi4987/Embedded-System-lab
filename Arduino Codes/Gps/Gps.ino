#include<SoftwareSerial.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
  int inByte=0;

//SoftwareSerial gpsSerial(2,3);

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,1);
  Serial.begin(9600);
  //gpsSerial.begin(9600);
  delay(1000);
  Serial.println("GPS module interfacing with Arduino");
  Serial.println();
  lcd.print("GPS");
}

void loop() {
  

  do
  {
    do
    {
      while(!Serial.available());
    
    }while('G'!=Serial.read());
    while(!Serial.available());
  
  }while('G'!=Serial.read());
  
  
  
  do
  {
    
    while(!Serial.available());
  
  }while(','!=Serial.read());
  
  
  do
  {
    
    while(!Serial.available());
  
  }while(','!=Serial.read());
  
  
  Serial.print("N:");
  
  do
  {
  
  while(!Serial.available());
  inByte=Serial.read();
  Serial.write(inByte);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write(inByte);
  
  }while(','!=inByte);
  
  
  do
    {
      while(!Serial.available());
    
    }while(','!=Serial.read());
  
   
   Serial.print("E:");
  
  do
  {
  
  while(!Serial.available());
  inByte=Serial.read();
  Serial.write(inByte);
  
  }while(','!=inByte);
  

   
   Serial.println();
   delay(1000);
   
}
