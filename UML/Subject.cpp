#include "Subject.h"

void Subject::attach(Observer *observer) {
    this->observers.push_back(observer);
}

void Subject::detach(Observer *observer) {
    observers.remove(observer);
}

void Subject::notify() {
    auto iterator = observers.begin();
    while (iterator != observers.end()) {
        (*iterator)->update();
        ++iterator;
    }
}

Subject::~Subject() = default;