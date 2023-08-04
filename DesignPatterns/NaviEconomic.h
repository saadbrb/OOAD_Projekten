#ifndef NAVIECONOMIC_H
#define NAVIECONOMIC_H
#include "RouteStrategy.h"


#include "Navigation.h"

class NaviEconomic: public RouteStrategy {
private:
    void calculateRoute() override;
};


#endif //NAVIECONOMIC_H
