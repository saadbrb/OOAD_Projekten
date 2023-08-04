#ifndef NAVIGATION_H
#define NAVIGATION_H
#include "RouteStrategy.h"

class Navigation {
public:
    explicit Navigation(RouteStrategy* strategy): route_strategy(strategy) {};
    void init();
    void setStrategy(RouteStrategy* new_strategy);

private:
    RouteStrategy* route_strategy;
    // The copy constructor and the copy assignment operator should be declared private
    // For simplicity of the exercise we ignore the rule of three
    //Navigation(const Navigation&);
    //Navigation& operator=(const Navigation&);
};

#endif //NAVIGATION_H
