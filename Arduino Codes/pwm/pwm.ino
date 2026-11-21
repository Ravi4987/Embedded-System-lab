
int led=3;
int motor=3;
int val=0;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  

}

void loop() {
  val=analogRead(A0);
  analogWrite(led,val/4);
  analogWrite(motor,val/4);
  
}
