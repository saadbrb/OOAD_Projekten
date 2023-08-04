
#ifndef _SYSTEMBATTERY_H
#define _SYSTEMBATTERY_H

#include "Subject.h"

class SystemBattery : public Subject {
public:
    void setBatteryLevel(int data);

    int getData() const;

private:
    int BatteryLevel = 0;
};


#endif //_SYSTEMBATTERY_H
