//
// Created by saadb on 23.06.2023.
//

#ifndef STRATEGY_ROUTESTRATEGY_H
#define STRATEGY_ROUTESTRATEGY_H


class RouteStrategy {
public:
    virtual ~RouteStrategy() {}
    virtual void calculateRoute() = 0;
};


#endif //STRATEGY_ROUTESTRATEGY_H
