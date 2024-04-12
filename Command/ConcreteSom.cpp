//Implementacao da comunicacao entre Som e o Command
#include "ConcreteSom.h"

ConcreteSom::ConcreteSom(Som* som, std::string data) : somDispositivo(som), data(data) {}

void ConcreteSom::execute() {
    this->somDispositivo->ligar(this->data);
}

void ConcreteSom::desligue() {
	this->somDispositivo->desligar();
}

