int led=13;
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
}







void loop() {
  
  if (Serial.available()>0 )
  {
    char c=Serial.read();
    
  //Serial.println(c);
  if(c=='1')
   {
     digitalWrite(13,HIGH);
   }
   
   else if(c=='2')
   {
     digitalWrite(13,LOW);
   }
   
   
   
   
   
   else if(c=='3')
   {
     digitalWrite(12,HIGH);
   }
   
   else if(c=='4')
   {
     digitalWrite(12,LOW);
   }
   
   
   
   else if(c=='5')
   {
     digitalWrite(11,HIGH);
   }
   
   else if(c=='6')
   {
     digitalWrite(11,LOW);
   }
   
   else if(c=='7')
   {
     digitalWrite(10,HIGH);
   }
   
   else if(c=='8')
   {
     digitalWrite(10,LOW);
     
   }
   }
  

}
