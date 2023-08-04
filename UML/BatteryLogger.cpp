#include "BatteryLogger.h"
#include <iostream>

BatteryLogger::BatteryLogger(SystemBattery &subject, std::string name) : subject(subject), name(std::move(name)) {
    this->subject.attach(this);
    oldBatteryLevelVector.push_back(0);
}

BatteryLogger::~BatteryLogger() {
    this->subject.detach(this);
}

void BatteryLogger::update() {
    int newValue = this->subject.getData();
    int last=oldBatteryLevelVector[oldBatteryLevelVector.size()-1];
    std::cout << "This is BatteryLogger " << name << "! Change from "<<last<< " to " << newValue << "\n\n";
    oldBatteryLevelVector.push_back(newValue);
}
