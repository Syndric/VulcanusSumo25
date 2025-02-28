#ifndef TOFHandler_h
#define TOFHandler_h

#include "Arduino.h"
#include "Wire.h"
#include "VL53L0X.h"

#define TCAADDR 0x70

class TOFHandler
{
public:
    TOFHandler(int k1, int k2, int k3, int k4, int k5);
    void Begin();
    void Update();
    int Get(int i);
    static void tcaselect(uint8_t i);

private:
    VL53L0X lox[5];
    int cTOF[5];
    int read[5];
};

#endif