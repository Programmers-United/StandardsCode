#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
    virtual ~Observer() = 0;
    virtual void notify() = 0;
};

inline Observer::~Observer() {}

#endif