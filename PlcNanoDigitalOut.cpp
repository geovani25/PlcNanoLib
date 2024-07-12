#include "PlcNanoDigitalOut.hpp"
#include <Adafruit_PCF8574.h>

PlcNanoDigitalOut::PlcNanoDigitalOut()
{
}

PlcNanoDigitalOut::~PlcNanoDigitalOut()
{
}

bool PlcNanoDigitalOut::begin(void)
{
}

void PlcNanoDigitalOut::set(void)
{
    pcf.digitalWrite(m_pin, HIGH);
}

void PlcNanoDigitalOut::reset(void)
{
    pcf.digitalWrite(m_pin, LOW);
}

