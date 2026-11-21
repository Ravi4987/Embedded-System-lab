int val=0;
  
void setup() {
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value=analogRead(A0);
  int pinvalue=map(value,0,1023,0,255);
  analogWrite(8,pinvalue);
  //digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  delay(1000);
  Serial.println(pinvalue);
   
  /*if(Serial.available()>0)
  {
   
  char c=(Serial.read());
  Serial.println(c);
      switch(c)
     {
       case '1':
       value=100;
       analogWrite(8,value);
       //digitalWrite(8,HIGH);
       digitalWrite(9,LOW);
       delay(1000);
       Serial.println(pinvalue);
       break;
       
       
       case '5':
       value=512;
       analogWrite(8,pinvalue);
       //digitalWrite(8,HIGH);
       digitalWrite(9,LOW);
       delay(1000);
       Serial.println(pinvalue);
       break;
       
       case '0':
       value=0;
       analogWrite(8,pinvalue);
       //digitalWrite(8,LOW);
       digitalWrite(9,LOW);
       delay(1000);
       Serial.println(pinvalue);
       break;
       
       default:
       value=150;
       analogWrite(8,pinvalue);
       //digitalWrite(8,HIGH);
       digitalWrite(9,LOW);
       delay(1000);
       Serial.println(pinvalue);
       
     }
  }*/
}
