void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(10,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
  pinMode(12,INPUT_PULLUP);
  pinMode(13,INPUT_PULLUP);
  Serial.begin(9600);
  
}

void up()
{

  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  //delay(2000);
}

void down()
{

  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  //delay(2000);
}

void left()
{
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  //delay(2000);
}

void right()
{
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  //delay(2000);
}


void loop() {
  int s1=digitalRead(13);
  int s2=digitalRead(12);
  int s3=digitalRead(11);
  int s4=digitalRead(10);
  
  
  if(s1==LOW && s2==HIGH && s3==HIGH && s4==HIGH)
  {
  
  up();
  
  }
  
 else if(s1==HIGH && s2==LOW && s3==HIGH && s4==HIGH)
  {
  
  down();
  
  }
  
 else if(s1==HIGH && s2==HIGH && s3==LOW && s4==HIGH)
  {
  
  left();
  
  }
  
 else if(s1==HIGH && s2==HIGH && s3==HIGH && s4==LOW)
  {
  
  right();
  
  }

  else
  {
    digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  //delay(2000); 
  
  
  }
  
  

}
