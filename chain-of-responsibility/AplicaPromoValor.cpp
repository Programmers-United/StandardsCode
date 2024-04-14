#include "AplicaPromoValor.h"

using namespace std;

void AplicaPromoValor::aplicaPromo(Item *item) {
	if(item->getValor()>=100){
		if(next!=NULL){
			next->aplicaPromo(item);
		}
		cout << "\t"<<"Item Valor: Aprovado" << endl;
	}else{
		if(next!=NULL){
			next->aplicaPromo(item);
		}
		cout << "\t"<<"Item Valor: Reprovado" << endl;
	}
		
}
Promo *AplicaPromoValor::setNext(Promo *promo){
	this->next = promo;
	return promo;
}
