//Implementacao da comunicacao entre ArCondicionado e o Command
#include "ConcreteAr.h"

ConcreteAr::ConcreteAr(ArCondicionado* ar, std::string hora) : arDispositivo(ar), hora(hora) {}

void ConcreteAr::execute() {
    this->arDispositivo->ligar(this->hora);
}

void ConcreteAr::desligue() {
	this->arDispositivo->desligar(this->hora);
}

