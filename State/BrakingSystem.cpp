#include "BrakingSystem.h"
#include "states/State.h"
#include "states/Green.h"

BrakingSystem::BrakingSystem() {
    this->state = Green();
}

BrakingSystem::BrakingSystem(State state) {
    this->state = state;
}

void BrakingSystem::setStatus(State state) {
    this->state = state;
}

void BrakingSystem::getInfo() {
    this->state.verifyStatus();
}

void BrakingSystem::nextState() {
    this->state.next();
}