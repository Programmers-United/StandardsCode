//Declaracao da comunicacao entre ArCondicionado e o Command
#ifndef CONCRETEAR_H
#define CONCRETEAR_H

#include "ArCondicionado.h"
#include "StandardCommand.h"

class ConcreteAr : public StandardCommand {
private:
    ArCondicionado* arDispositivo;
    std::string hora;

public:
    ConcreteAr(ArCondicionado* ar, std::string hora);
    void execute() override;
    void desligue() override;
};

#endif
