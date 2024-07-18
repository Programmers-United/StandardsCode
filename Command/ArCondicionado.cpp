//Implementacao da classe de ArCondicionado
#include "ArCondicionado.h"

void ArCondicionado::ligar(std::string hora) {
	std::cout << "Ar Condicionado ligado por " << hora << " horas" << std::endl;
} 

void ArCondicionado::desligar(std::string hora) {
	std::cout << "Ar Condicionado desligado depois de " << hora << " horas" << std::endl;
}
