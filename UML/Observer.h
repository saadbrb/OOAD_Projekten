#ifndef OBSERVER_H_H
#define OBSERVER_H_H

class Observer {
public:
    virtual void update() = 0;

    virtual ~Observer() = default;

};

#endif
