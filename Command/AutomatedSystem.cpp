//Implementacao do sistema automatizado
#include "AutomatedSystem.h"

AutomatedSystem::AutomatedSystem() {}

void AutomatedSystem::addComandoEntrar(StandardCommand* comando) {
    comandosEntrar.push_back(comando);
}

void AutomatedSystem::addComandoSair(StandardCommand* comando) {
    comandosSair.push_back(comando);
}

void AutomatedSystem::entrar() {
    for (std::vector<StandardCommand*>::iterator it = comandosEntrar.begin(); it != comandosEntrar.end(); ++it) {
        (*it)->execute(); // Correção do nome do método
    }
}

void AutomatedSystem::sair() {
    for (std::vector<StandardCommand*>::iterator it = comandosSair.begin(); it != comandosSair.end(); ++it) {
        (*it)->desligue(); // Correção do nome do método
    }
}

