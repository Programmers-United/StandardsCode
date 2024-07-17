#ifndef BRAKINGSYSTEM_H
#define BRAKINGSYSTEM_H

#include "states/State.h"

class BrakingSystem {
private:
    State* currentState;
public:
    BrakingSystem(State* state);
    BrakingSystem();
    ~BrakingSystem();
    void getInfo();
    void nextState();
};

#endif 