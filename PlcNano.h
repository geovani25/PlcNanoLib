#if !defined(__PLCNANO_HPP__)
#define __PLCNANO_HPP__

#include "Arduino.h"
#include "PlcNanoDigitalOut.hpp"
#include <Adafruit_PCF8574.h>

class PlcNano
{
private:
    struct PlcNanoHwIo
    {
        PlcNanoHwIo(uint8_t pinO0) : PinO0(pinO0)
        {
        }
        PlcNanoDigitalOut PinO0;
    };

public:
    /**
     * @brief begin low level structures.
     */
    static void begin(void)
    {
        getInstance().bBegin();
    }

    /**
     * @brief Get the Pin object
     * @return PlcNanoHwIo const& option pins.
     */
    static PlcNanoHwIo const& getPin(void)
    {
        return getInstance().m_plcNanoHwIo;
    }

private:
    /**
     * @brief Get the Instance object
     * @return PlcNano const& reference.
     */
    static PlcNano const& getInstance(void)
    {
        static PlcNano const instance;
        return instance;
    }

    /**
     * @brief Begins lower level peripherals for PLC Nano.
     * @return true if succeed, false otherwise.
     */
    bool bBegin(void);

    PlcNano() : m_plcNanoHwIo(0) {}
    ~PlcNano() {}

    Adafruit_PCF8574 m_pcf;
    PlcNanoHwIo const m_plcNanoHwIo;
};

#endif // __PLCNANO_HPP__
