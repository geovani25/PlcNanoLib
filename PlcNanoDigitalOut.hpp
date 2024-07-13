#if !defined(__PLCNANODIGITALOUTPUT_HPP__)
#define __PLCNANODIGITALOUTPUT_HPP__

#include <stdint.h>
#include <Adafruit_PCF8574.h>

class PlcNanoDigitalOut
{
    static Adafruit_PCF8574 const * pPcf;

public:
    /**
     * @brief Initialize pcf pointer so it can
     *        be used across different functions.
     * 
     * @param pcf pointer
     * @return true if succeeded, false otherwise.
     */
    static bool begin(Adafruit_PCF8574 const * const pcf);

    /**
     * @brief Sets the ouput pin.
     */
    void set(void);

    /**
     * @brief Resets the ouput pin.
     */
    void reset(void);

    /**
     * @brief Toggle the ouput pin.
     */
    void toggle(void);

    /**
     * @brief Construct a new Plc Nano Digital Out object
     * @param pin number
     */
    PlcNanoDigitalOut(uint8_t const pin);
    ~PlcNanoDigitalOut();

private:
    uint8_t const m_pin;
};

#endif // __PLCNANODIGITALOUTPUT_HPP__
