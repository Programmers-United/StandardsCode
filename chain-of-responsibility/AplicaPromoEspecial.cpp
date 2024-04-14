#include "AplicaPromoEspecial.h"

using namespace std;

void AplicaPromoEspecial::aplicaPromo(Item *item) {
	if(item->getEspecial() == true){
		if(next!=NULL){
			next->aplicaPromo(item);
		}
		cout << "\t"<<"Item Especial: Aprovado" << endl;
	}else{
		if(next!=NULL){
			next->aplicaPromo(item);
		}
		cout << "\t"<<"Item Especial: Reprovado" << endl;
	}
	
}
Promo *AplicaPromoEspecial::setNext(Promo *promo) {
	this->next = promo;
	return promo;
}
