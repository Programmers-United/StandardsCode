#include <iostream>
#include "AutomatedSystem.h"
#include "Som.h"
#include "ConcreteSom.h"
#include "Tv.h"
#include "ConcreteTv.h"
#include "ArCondicionado.h"
#include "ConcreteAr.h"

int main() {
	AutomatedSystem* systemAutomated = new AutomatedSystem(); // Alocando memória
	
	// Criando objetos
	ConcreteSom concreteSom(new Som(), "12/04");
	ConcreteTv concreteTv(new Tv());
	ConcreteAr concreteAr(new ArCondicionado(), "4");

	//Adicionando objetos para a lista de entrada	
	systemAutomated->addComandoEntrar(&concreteSom); // Passando o endereço do objeto para o AutomatedSystem
	systemAutomated->addComandoEntrar(&concreteTv);
	systemAutomated->addComandoEntrar(&concreteAr);
	
	//Adicionando objetos para a lista de saida
	systemAutomated->addComandoSair(&concreteSom);
	systemAutomated->addComandoSair(&concreteTv);
	systemAutomated->addComandoSair(&concreteAr);
	
	//Chamando a exercucao dos objteos de entrada
	systemAutomated->entrar();
	
	//Chamando a exercucao dos objteos de saida
	systemAutomated->sair();
	
	delete systemAutomated; // Liberando a memória alocada

	return 0;
}
