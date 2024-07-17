#ifndef STATE_H
#define STATE_H

class State{
public:
    virtual void verifyStatus();
    virtual State next();
};

#endif