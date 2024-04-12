//Implementacao da comunicacao entre Tv e o Command
#include "ConcreteTv.h"

ConcreteTv::ConcreteTv(Tv* tv) : tvDispositivo(tv) {}

void ConcreteTv::execute() {
    this->tvDispositivo->ligar();
}

void ConcreteTv::desligue() {
	this->tvDispositivo->desligar();
}

