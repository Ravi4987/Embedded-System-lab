#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(8,OUTPUT);
  lcd.setCursor(0,0);
  lcd.print("Voltage= ");
  lcd.setCursor(0,1);
  lcd.print("Temp=" );

}

void loop() {
  int AN=analogRead(A0);
  int AN1=analogRead(A1);
  
  int voltage=AN*5.0/1023;
  lcd.setCursor(8,0);
  lcd.print(voltage);
  lcd.setCursor(8,1);
  int TEMP=AN1*4.88/10;
  lcd.print(TEMP);
  Serial.print("Tempreture:");
  Serial.println(TEMP);
  delay(1000);
  if(TEMP>25)
  {
  
  digitalWrite(8,HIGH);
  
  }
  
  else
  {
  digitalWrite(8,LOW);
  }
  
}
