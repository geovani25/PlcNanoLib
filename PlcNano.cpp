#include "PlcNano.h"
#include <Wire.h>

bool PlcNano::bBegin(void)
{
    bool bRet = m_pcf.begin(0x20, &Wire);
    bRet = bRet && PlcNanoDigitalOut::begin(&m_pcf);

    for (uint8_t p = 0; p < 4; p++)
    {
        m_pcf.pinMode(p, OUTPUT);     // set lower niblle to OUTPUT
    }

    for (uint8_t p = 4; p < 8; p++)
    {
        m_pcf.pinMode(p, INPUT_PULLUP);   // set high nibble to INPUT with PULLUP
    }

    return bRet;
}
