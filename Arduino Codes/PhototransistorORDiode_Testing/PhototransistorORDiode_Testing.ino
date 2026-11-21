void setup() {
  Serial.begin(9600);

}

void loop() {
  int value=analogRead(A0);

  Serial.print("Digital Value:");
  Serial.println(value);
  value=(5.0/1023)*value;

  Serial.println("");
  Serial.println("");
  Serial.print("Volatge Value:");
  Serial.println(value);
  delay(2000);

}
