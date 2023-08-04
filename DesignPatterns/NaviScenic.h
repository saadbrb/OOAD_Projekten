#ifndef NAVISCENIC_H
#define NAVISCENIC_H
#include "RouteStrategy.h"

#include "Navigation.h"

class NaviScenic: public RouteStrategy {
private:
    void calculateRoute() override;
};



#endif //NAVISCENIC_H
