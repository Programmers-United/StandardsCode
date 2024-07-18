#ifndef MOM_H
#define MOM_H

#include "../Observer.h"

class Mom : public Observer {
public:
    void notify() override;
};

#endif