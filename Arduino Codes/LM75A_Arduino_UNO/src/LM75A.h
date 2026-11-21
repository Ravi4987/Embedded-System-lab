#ifndef LM75A_H
#define LM75A_H

#include <Arduino.h>
#include <Wire.h>

class LM75A
{
public:
    explicit LM75A(uint8_t address = 0x48);

    bool begin();
    bool isConnected();
    float readTemperature();

private:
    uint8_t _address;
    static const uint8_t TEMP_REGISTER = 0x00;
};

#endif
