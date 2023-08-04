#ifndef NAVIFAST_H
#define NAVIFAST_H
#include "RouteStrategy.h"


#include "Navigation.h"

    class NaviFast: public RouteStrategy {
    private:
        void calculateRoute() override;
    };

#endif //NAVIFAST_H
