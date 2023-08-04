#include "SystemBattery.h"
#include <iostream>

void SystemBattery::setBatteryLevel(int _data) {
    this->BatteryLevel = _data;
    std::cout << "New value " << BatteryLevel << " received! \n";
    this->notify();
}

int SystemBattery::getData() const {
    return this->BatteryLevel;
}
