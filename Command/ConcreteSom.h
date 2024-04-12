//Implementacao da comunicacao entre Som e o Command
#ifndef CONCRETESOM_H
#define CONCRETESOM_H

#include "Som.h"
#include "StandardCommand.h"

class ConcreteSom : public StandardCommand {
private:
    Som* somDispositivo;
    std::string data;

public:
    ConcreteSom(Som* som, std::string data);
    void execute() override;
    void desligue() override;
};

#endif
