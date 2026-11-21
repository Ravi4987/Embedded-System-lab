#include<EEPROM.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
int addr=0;
char r='R';

void setup() {

lcd.begin(16,2);
EEPROM.write(0,100);

}

void loop() {

  r=EEPROM.read(0);
  lcd.setCursor(0,0);
  
  lcd.print(r);
  
}
