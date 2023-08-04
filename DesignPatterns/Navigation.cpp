#include "Navigation.h"
#include <iostream>


void Navigation::init() {
    std::cout << "Welcome to the Simulator of Navigation Devices!" << std::endl;
    this->route_strategy->calculateRoute();
}

void Navigation::setStrategy(RouteStrategy* new_strategy) {
    this->route_strategy = new_strategy;
}