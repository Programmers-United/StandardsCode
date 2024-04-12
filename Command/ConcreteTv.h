//Implementacao da comunicacao entre Tv e o Command
#ifndef CONCRETETV_H
#define CONCRETETV_H

#include "Tv.h"
#include "StandardCommand.h"

class ConcreteTv : public StandardCommand {
private:
    Tv* tvDispositivo;

public:
    ConcreteTv(Tv* tv);
    void execute() override;
    void desligue() override;
};

#endif
