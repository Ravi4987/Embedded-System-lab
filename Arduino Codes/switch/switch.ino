boolean state = true;
void setup() {
pinMode(1,INPUT);
pinMode(2,OUTPUT);
 
//pinMode(3,OUTPUT);
}

void loop() {
  int S1=digitalRead(1);
 // int S2=digitalRead(0);
  if(S1==LOW)
   {
     state=!state;
      digitalWrite(2,state);
     
      
   }

   
  /** if(S1==LOW && S2==LOW)
   {
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   
   }***/
   
   
   
}
