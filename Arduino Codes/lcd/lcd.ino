
#include <LiquidCrystal.h>

LiquidCrystal lcd(4,5,3,2,1,0);
void setup() {
  lcd.begin(16,2);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  

}

 void loop() {
   int S1=digitalRead(8);
  int S2=digitalRead(9);
  lcd.setCursor(5,0);
  if(S1==LOW)
  {
  lcd.clear();
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  lcd.print("Yellow");
  }


  if(S2==LOW)
  {
  lcd.clear();
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  lcd.print("Red");
  }



}
