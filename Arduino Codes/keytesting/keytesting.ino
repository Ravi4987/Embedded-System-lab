

void setup() {
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  
  Serial.begin(9600);
  
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  
  }



  void col1()
 {
   
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  
  digitalWrite(7,LOW);
  if(digitalRead(8)==LOW)
  Serial.print("1");
  delay(70);

  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  if(digitalRead(8)==LOW)
  Serial.print("4");
  delay(50);
  
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  if(digitalRead(8)==LOW)
  Serial.print("7");
  
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  if(digitalRead(8)==LOW)
  Serial.print("*");
  delay(40);
    
  digitalWrite(4,HIGH);


 }

 void col2()
 {
    
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  
  digitalWrite(7,LOW);
  if(digitalRead(9)==LOW)
  Serial.print("2");
  delay(70);

  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  if(digitalRead(9)==LOW)
  Serial.print("5");
  delay(50);
  
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  if(digitalRead(9)==LOW)
  Serial.print("8");
  
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  if(digitalRead(9)==LOW)
  Serial.print("0");
  delay(40);
    
  digitalWrite(4,HIGH);
 
 
 
 }
 
 void col3()
 {
 
 digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  
  digitalWrite(7,LOW);
  if(digitalRead(10)==LOW)
  Serial.print("3");
  delay(70);

  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  if(digitalRead(10)==LOW)
  Serial.print("6");
  delay(50);
  
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  if(digitalRead(10)==LOW)
  Serial.print("9");
  
  
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  if(digitalRead(10)==LOW)
  Serial.print("#");
  delay(40);
    
  digitalWrite(4,HIGH);
 
 
 }




void loop() {
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
 
  if(digitalRead(8)==LOW)
  {
  col1();
  }
   
    if(digitalRead(9)==LOW)
    {
  col2();  
    }
    
  if(digitalRead(10)==LOW)
    {
  col3();  
    }

}
