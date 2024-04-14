#include <iostream>
#include "Item.h"
#include "AplicaPromoEspecial.h"
#include "AplicaPromoValor.h"
#include "AplicaPromoEstoque.h"

using namespace std;
int main(){
	// Criando um item
	Item *item1 = new Item("Chuteira",true, 150, 100);
	Item *item2 = new Item("Bola de Volei",false, 50, 100);
	Item *item3 = new Item("Luvas de Goleiro",true, 10, 25);
	
	// Criando objetos de descontos
	Promo *cadeiaDePromo = new AplicaPromoEspecial();
	Promo *promoValor = new AplicaPromoValor();
	Promo *promoEstoque = new AplicaPromoEstoque();
	
	// Defini a cadeia
	cadeiaDePromo->setNext(promoValor);
	promoValor->setNext(promoEstoque);
	
	// Verifica se tem promo
	// item 1
	cout << item1->getName() << " :"<< endl;
	cadeiaDePromo->aplicaPromo(item1);
	// item 2 
	cout << item2->getName() << " :"<< endl;
	cadeiaDePromo->aplicaPromo(item2);
	// item 3
	cout << item3->getName() << " :"<< endl;
	cadeiaDePromo->aplicaPromo(item3);
	return 0;
}
