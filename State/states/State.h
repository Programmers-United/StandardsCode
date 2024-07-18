#ifndef STATE_H
#define STATE_H

class State{
public:
    virtual ~State() = 0;
    virtual void verifyStatus() = 0;
    virtual State* next() = 0;
};

inline State::~State() {}

#endif