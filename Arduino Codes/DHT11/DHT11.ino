#include <DHT11.h>
DHT11 dht11(4);
void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT);

}

void loop() {
  
  float temp;
  float humi;
  int chk=dht11.read(temp, humi);
    Serial.print("Tempreture=");
  Serial.print(temp);
  Serial.print(" humidity=");
  Serial.println(humi);
  delay(1000);
}
