//Declaracao do sistema automatizado
#include <iostream>
#include <vector>
#include "StandardCommand.h"

class AutomatedSystem {
private:
    std::vector<StandardCommand*> comandosEntrar;
    std::vector<StandardCommand*> comandosSair;

public:
    AutomatedSystem();
    void addComandoEntrar(StandardCommand* comando);
    void addComandoSair(StandardCommand* comando);
    void entrar();
    void sair();
};

