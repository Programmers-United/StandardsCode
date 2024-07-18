#include <iostream>
#include "Doorman.h"
#include "../observer/Observer.h"

Doorman::Doorman() {
    this->eventHappened = false;
}

Doorman::Doorman(bool eventHappened) {
    this->eventHappened = eventHappened;
}

Doorman::~Doorman() {}

void Doorman::setEventHappened(bool eventHappened) {
    this->eventHappened = eventHappened;
}

void Doorman::addObserver(Observer* observer) {
    this->observers.push_back(observer);
}

void Doorman::notifyObservers() {
    if (this->eventHappened) {
        std::cout << "\nNotificando observadores...\n";
        for (Observer* observer : observers) {
            observer->notify();
        }
    } else {
        std::cout << "\nO namorado ainda não passou por aqui...\n";
    }
}