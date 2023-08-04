#ifndef _BATTERYAPP_H
#define _BATTERYAPP_H

#include "Observer.h"
#include "SystemBattery.h"

#include <string>

class BatteryApp : public Observer {
public:
    BatteryApp(SystemBattery &subject, std::string name);

    ~BatteryApp() override;

    void update() override;

private:
    SystemBattery &subject;
    std::string name;
};


#endif //_BATTERYAPP_H
