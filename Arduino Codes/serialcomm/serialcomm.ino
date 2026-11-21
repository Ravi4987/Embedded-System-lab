void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  //Serial.print("My Name");
  //Serial.println("is Ravi");
  //Serial.println(" ");
  if(Serial.available()>0)
  {
  char cmd=Serial.read();
  //Serial.print(cmd);
  if(cmd=='A')
  {
    Serial.println("Red is led on");
 digitalWrite(2,HIGH);
  }
 if(cmd=='B')
  {
    Serial.print("Green led is on");
 digitalWrite(3,HIGH);
  }
  
  
  }
  
}
