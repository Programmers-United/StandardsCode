#ifndef YELLOW_H
#define YELLOW_H

#include "State.h"

class Yellow : public State {
public: 
    Yellow();
    void verifyStatus() override;
    State* next() override;
};

#endif