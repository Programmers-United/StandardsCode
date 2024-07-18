#include <iostream>
#include "observer/impl/Girlfriend.h"
#include "observer/impl/Mom.h"
#include "subject/Doorman.h"

int main() {

    // Observers
    Girlfriend* girlfriendObserver = new Girlfriend();
    Mom* momObserver = new Mom();

    // Subject
    Doorman doorman = Doorman();
    // Add observers
    doorman.addObserver(girlfriendObserver);
    doorman.addObserver(momObserver);

    doorman.notifyObservers();

    doorman.setEventHappened(true);

    doorman.notifyObservers();

    return 0;
}