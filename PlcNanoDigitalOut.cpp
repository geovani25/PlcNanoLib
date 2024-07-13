#include "PlcNanoDigitalOut.hpp"

PlcNanoDigitalOut::PlcNanoDigitalOut(uint8_t const pin) : m_pin(pin)
{
}

PlcNanoDigitalOut::~PlcNanoDigitalOut()
{
}

Adafruit_PCF8574 const * PlcNanoDigitalOut::pPcf = nullptr;

bool PlcNanoDigitalOut::begin(Adafruit_PCF8574 const * const pcf)
{
    if (pcf != nullptr)
    {
        pPcf = pcf;
        return true;
    }
    return false;
}

void PlcNanoDigitalOut::set(void)
{
    pPcf->digitalWrite(m_pin, HIGH);
}

void PlcNanoDigitalOut::reset(void)
{
    pPcf->digitalWrite(m_pin, LOW);
}

void PlcNanoDigitalOut::toggle(void)
{
    pPcf->digitalWrite(m_pin, !pPcf->digitalRead(m_pin));
}

