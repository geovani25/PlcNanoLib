#if !defined(__PLCNANO_HPP__)
#define __PLCNANO_HPP__

#include "PlcNanoDigitalOut.hpp"

class PlcNano
{
private:
    struct PlcNanoHwIo
    {
    };

public:
    bool begin(void);

    PlcNanoHwIo const& getHwIo(void)
    {
        static PlcNanoHwIo instance;
        return instance;
    }

private:

    PlcNano() {}
    ~PlcNano() {}
};

#endif // __PLCNANO_HPP__
