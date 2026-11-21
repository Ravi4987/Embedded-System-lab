#include "LM75A.h"

LM75A::LM75A(uint8_t address)
    : _address(address)
{
}

bool LM75A::begin()
{
    Wire.begin();
    return isConnected();
}

bool LM75A::isConnected()
{
    Wire.beginTransmission(_address);
    return (Wire.endTransmission() == 0);
}

float LM75A::readTemperature()
{
    Wire.beginTransmission(_address);
    Wire.write(TEMP_REGISTER);

    if (Wire.endTransmission() != 0)
        return -999.0f;

    if (Wire.requestFrom(_address, (uint8_t)2) != 2)
        return -999.0f;

    uint8_t msb = Wire.read();
    uint8_t lsb = Wire.read();

    int16_t raw = ((int16_t)msb << 8) | lsb;

    // LM75A: 11-bit two's-complement, 0.125 C resolution
    raw >>= 5;

    return raw * 0.125f;
}
