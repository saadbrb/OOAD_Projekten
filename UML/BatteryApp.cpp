#include "BatteryApp.h"
#include <iostream>

BatteryApp::BatteryApp(SystemBattery &subject, std::string name) : subject(subject), name(std::move(name)) {
    this->subject.attach(this);
}

BatteryApp::~BatteryApp() {
    this->subject.detach(this);
}

void BatteryApp::update() {
    int newValue = this->subject.getData();
    std::cout << "This is " << name << "! Received value " << newValue << "\n";
}
