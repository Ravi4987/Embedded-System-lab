char passref[5]="1234";
char pass[5];


void setup() {
pinMode(13,OUTPUT);

 Serial.begin(9600);
 Serial.println("Please enter the password to access the device");
}

void loop() {
  
if(Serial.available()>0)
{
   Serial.readBytesUntil('\0',pass,4);
   if(!(strcmp(pass,passref)))
  {
  
    Serial.println("code is correct");
    digitalWrite(13,1);
    delay(500);
  
  }
  
  if('r'==Serial.read()||'R'==Serial.read())
  {
    Serial.print("Reset the password");
    delay(500);
    Serial.print("Enter the old password");

    if 
    
    
    }
  
  
  }


}
