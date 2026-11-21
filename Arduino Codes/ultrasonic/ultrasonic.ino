
const int trigerpin=3;
const int echopin=2;

long duration,inches,cm;


void setup() {
  
  Serial.begin(9600);
}



void loop() {
  pinMode(trigerpin,OUTPUT);
  digitalWrite(trigerpin,LOW);
  
  delayMicroseconds(2);
  digitalWrite(trigerpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigerpin,LOW);
  pinMode(echopin,INPUT);
  duration=pulseIn(echopin,HIGH);
  inches=microsecondsToInches(duration);
  cm=microsecondsToCentimeters(duration);
  
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  delay(1000);
  
}

long microsecondsToInches(long microseconds)
{
  
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
  
  return microseconds / 29 / 2;
}




