# LM75A Arduino UNO - PlatformIO

PlatformIO project for interfacing an LM75A temperature sensor with Arduino UNO over I2C.

## Wiring

| LM75A | Arduino UNO |
|---|---|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

For the default address, connect A0, A1 and A2 to GND. The address is then `0x48`.

## Project structure

```text
LM75A_Arduino_UNO/
├── platformio.ini
├── README.md
└── src/
    ├── main.cpp
    ├── LM75A.cpp
    └── LM75A.h
```

## Build

```bash
pio run
```

## Upload

```bash
pio run --target upload
```

## Serial monitor

```bash
pio device monitor
```

Baud rate: 9600

## I2C address

LM75A addresses are normally 0x48 to 0x4F depending on A2/A1/A0.

Change the address in `main.cpp` if required:

```cpp
LM75A temperatureSensor(0x48);
```
