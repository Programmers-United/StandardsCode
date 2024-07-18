#ifndef GREEN_H
#define GREEN_H

#include "State.h"

class Green : public State {
public:
    Green();
    void verifyStatus() override;
    State* next() override;
};

#endif