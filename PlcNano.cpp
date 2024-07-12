#include "PlcNano.h"
#include <Wire.h>
#include <Adafruit_PCF8574.h>

bool PlcNano::begin(void)
{
    bool bRet = pcf.begin(0x20, &Wire);

    for (uint8_t p = 0; p < 4; p++)
    {
        pcf.pinMode(p, OUTPUT);     // set lower niblle to OUTPUT
    }

    for (uint8_t p = 4; p < 8; p++)
    {
        pcf.pinMode(p, INPUT_PULLUP);   // set high nibble to INPUT with PULLUP
    }

    return bRet;
}
