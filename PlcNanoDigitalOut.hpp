#if !defined(__PLCNANODIGITALOUTPUT_HPP__)
#define __PLCNANODIGITALOUTPUT_HPP__

class PlcNanoDigitalOut
{
public:
    void set(void);
    void reset(void);
    bool begin(void);

    PlcNanoDigitalOut();
    ~PlcNanoDigitalOut();

private:
    int const m_pin;
};

#endif // __PLCNANODIGITALOUTPUT_HPP__
