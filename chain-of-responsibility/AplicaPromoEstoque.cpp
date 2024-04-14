#include "AplicaPromoEstoque.h"

using namespace std;

void AplicaPromoEstoque::aplicaPromo (Item *item) {
	if(item->getEstoque()>=100){
		if(next!=NULL){
			next->aplicaPromo(item);
		}
		cout << "\t"<<"Item Estoque: Aprovado" << endl;
	}else{
		if(next!=NULL){
			next->aplicaPromo(item);
		}
		cout <<"\t"<<"Item Estoque: Reprovado" << endl;
	}

}
Promo *AplicaPromoEstoque::setNext(Promo *promo) {
	this->next = promo;
	return promo;
}
