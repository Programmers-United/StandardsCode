#ifndef GIRLFRIEND_H
#define GIRLFRIEND_H

#include "../Observer.h"

class Girlfriend : public Observer {
public:
    void notify() override;
};

#endif