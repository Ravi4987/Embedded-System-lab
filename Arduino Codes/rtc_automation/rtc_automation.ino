#include <Wire.h>
#include "RTClib.h"
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
RTC_DS1307 RTC;

int i=1;
char Hour[3];
char Min[3];
int r,n;
int w=0;

void setup() {
  Serial.begin(9600);
  Wire.begin();
    RTC.begin();
     lcd.begin(20,4);
   
  
   pinMode(13,OUTPUT);
   digitalWrite(13,LOW);
 
  if (! RTC.isrunning()) 
  {
   Serial.println("RTC is NOT running!");
    // following line sets the RTC to the date & time this sketch was compiled
  RTC.adjust(DateTime(__DATE__, __TIME__));
}

}

void loop() {
  

  /*if(Serial.available()>0)
  {
    char s= Serial.read();
          if(s=='M'||s=='m')
            {
      i=1;
      Serial.print(i);
      delay(500);
      
      
      }


      if(s=='n'||s=='N')
    {
      i=2;
      Serial.print(i);
      delay(500);
      
      
      }

   }*/

          
        

    /*while(i==1)
      {
        
       Serial.println("Mode1");
        delay(500);
        if(Serial.available()>0)
        {
          char t=Serial.read();
          if(t=='N'||t=='n')
          {i=2;
            Serial.print(i);
      delay(500);
            }
            
            
            }
            
      }*/

      while(i==2)
      {
        
        Serial.println("Device is in configuration Mode");
          Serial.println("Press enter to proceed...");
          while('\r'!=Serial.read());
          Serial.println("Here you can set the time at which you want to turn on the device");
          Serial.println("Type h=value(value of hour) then press entre then m=value(value of minute) ");
          while('h'!=Serial.read());
  while('='!=Serial.read());
  Serial.readBytesUntil('\0',Hour,2);
  while('\r'!=Serial.read());
  delay(100);
  while('m'!=Serial.read());
  while('='!=Serial.read());
  Serial.readBytesUntil('\0',Min,2);
  while('\r'!=Serial.read());

  Serial.println("Device will turn on at ");
  Serial.print("hour=");
  Serial.println(Hour);
  Serial.print("minute=");
  Serial.println(Min);
  delay(500);

   r=atoi(Hour);
   n=atoi(Min);
          
          delay(500);
          Serial.println("Press entre to exit");
          while('\r'!=Serial.read());
            i=1;
            w=1;
         if(Serial.available()>0)
        {
          char u=Serial.read();
          if(u=='M'||u=='m')
          {
            i=1;
            Serial.print(i);
            
            }
        
          
          
          }
          
       }

       
    while(i==1)
  {
    Serial.println("Device is in automation mode type n to configure the device on time");
     delay(500);
     
       if(Serial.available()>0)
       {
        char t=Serial.read();
        if(t=='N'||t=='n')
        {
          i=2;
          Serial.println(i);
           
          }

          if(t=='0')
          {
            digitalWrite(13,0);
            Serial.println("Device off");
            w=0;
            
            }

            if(t=='1')
          {
            digitalWrite(13,1);
            
            Serial.println("Device on");}
        }

        
     

    
       DateTime now = RTC.now();
    if(now.hour()==r && now.minute()==n && w==1 )
    {
      digitalWrite(13,1);
    }

    

    if(now.hour()>11)
    {
     lcd.setCursor(14, 1);
    lcd.print("PM"); 
  }
   else
  {
    lcd.setCursor(14, 1);
    lcd.print("AM"); 
  }
  
    lcd.setCursor(0, 0);
    lcd.print("Date-");
    lcd.print(now.day(), DEC);
    lcd.print('/');
    lcd.print(now.month(), DEC);
    lcd.print('/');
    lcd.print(now.year(), DEC);
    lcd.print(' ');
    lcd.setCursor(0, 1);
     if (now.hour()<10)
     
    lcd.print('0');
    lcd.print("Time-");
    if(now.hour()>12)
    {
    lcd.print(now.hour()-12, DEC);
    }
    else
    {
     lcd.print(now.hour(), DEC);
    } 
    lcd.print(':');
     if (now.minute()<10)
    lcd.print('0');
    lcd.print(now.minute(), DEC);
    lcd.print(':');
    if (now.second()<10)
    lcd.print('0');
    lcd.print(now.second(), DEC);
    lcd.setCursor(0, 3);
   int dayofTheweek = now.dayOfTheWeek();
   switch(dayofTheweek){
     case 1:
     lcd.print("Monday");
     break;
     case 2:
     lcd.print("Tuesday");
     break;
     case 3:
     lcd.print("Wednesday");
     break;
     case 4:
     lcd.print("Thursday");
     break;
     case 5:
     lcd.print("Friday");
     break;
     case 6:
     lcd.print("Saturday");
     break;
     case 0:
     lcd.print("Sunday");
     break;
    delay(1000);
}

  }

}
