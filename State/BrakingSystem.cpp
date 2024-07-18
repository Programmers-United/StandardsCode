#include "BrakingSystem.h"
#include "states/Green.h"
#include <iostream>

BrakingSystem::BrakingSystem(State *state) {
    this->currentState = state;
}

BrakingSystem::BrakingSystem() {
    this->currentState = new Green();
}

BrakingSystem::~BrakingSystem() {
    delete currentState;
}

void BrakingSystem::getInfo() {
    currentState->verifyStatus();
}

void BrakingSystem::nextState() {
    State *newState = currentState->next();
    delete currentState;
    currentState = newState;
}