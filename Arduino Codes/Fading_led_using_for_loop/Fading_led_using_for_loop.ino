/*
 * 
Program to fade an led connected on pin 9 using simple for loop and pwm 

*/

int ledPin=9;

void setup() {
  pinMode(ledPin,OUTPUT);

}

void loop() {
 int i,j;

 for(i=0;i<=255;i++) // This loop will increase the intensity of led slowly
 {
    analogWrite(ledPin,i);
    delay(8);
  
 }

 for(j=255;j>=0;j--) /// This loop will decrease the intensity of led slowly
 {
    
    analogWrite(ledPin,j);
    delay(8);

  
 }

}
