#ifndef RED_H
#define RED_H

#include "State.h"

class Red : public State {
public:
    Red();
    void verifyStatus();
    State next();
};

#endif