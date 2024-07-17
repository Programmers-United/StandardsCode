#ifndef BRAKINGSYSTEM_H
#define BRAKINGSYSTEM_H

#include "states/State.h"

class BrakingSystem {
private:
    State state;

public:
    BrakingSystem();
    BrakingSystem(State state);
    void setStatus(State state);
    void getInfo();
    void nextState();
};

#endif