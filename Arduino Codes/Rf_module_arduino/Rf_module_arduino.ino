#include<SoftwareSerial.h>
SoftwareSerial myserial(10,11);

void setup() {
  
 
myserial.begin(9600);
}

void loop() {
  if(myserial.available()>0)
  {
  char c=myserial.read();
  myserial.print(c);
 
  
  
  
  }

}
