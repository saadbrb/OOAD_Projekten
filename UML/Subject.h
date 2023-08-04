#ifndef SUBJECT_H_H
#define SUBJECT_H_H

#include "Observer.h"

#include <list>



class Subject {
public:
    ~Subject();

    void attach(Observer *observer);

    void detach(Observer *observer);

    void notify();

private:
    std::list<Observer *> observers;
};

#endif
