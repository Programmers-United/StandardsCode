#ifndef DOORMAN_H
#define DOORMAN_H

#include <vector>
#include "../observer/Observer.h"

class Doorman {
private:
    bool eventHappened;
    std::vector<Observer*> observers;

public:
    Doorman();
    Doorman(bool eventHappend);
    ~Doorman();
    void setEventHappened(bool eventHappened);
    void addObserver(Observer* Observer);
    void notifyObservers();
};

#endif