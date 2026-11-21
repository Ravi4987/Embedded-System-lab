#include <Arduino.h>
#include "LM75A.h"

LM75A temperatureSensor(0x48);

void setup()
{
    Serial.begin(9600);
    delay(500);

    Serial.println();
    Serial.println("LM75A Temperature Sensor");
    Serial.println("------------------------");

    if (temperatureSensor.begin())
        Serial.println("LM75A detected!");
    else
        Serial.println("LM75A NOT detected!");
}

void loop()
{
    if (!temperatureSensor.isConnected())
    {
        Serial.println("LM75A communication error!");
        delay(1000);
        return;
    }

    float temperature = temperatureSensor.readTemperature();

    if (temperature > -900.0f)
    {
        Serial.print("Temperature: ");
        Serial.print(temperature, 3);
        Serial.println(" C");
    }
    else
    {
        Serial.println("Temperature read error!");
    }

    delay(1000);
}
