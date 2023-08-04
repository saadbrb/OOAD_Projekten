#ifndef _BATTERYLOGGER_H
#define _BATTERYLOGGER_H


#include "Subject.h"
#include "Observer.h"
#include "SystemBattery.h"
//#include "BatteryApp.h"
#include <string>
#include <iostream>
#include <vector>

class BatteryLogger : public Observer {
public:
    BatteryLogger(SystemBattery &subject, std::string name);

    ~BatteryLogger() override;

    void update() override;

private:
    SystemBattery &subject;
    std::string name;
    std::vector<int> oldBatteryLevelVector;

};


#endif //_BATTERYLOGGER_H
