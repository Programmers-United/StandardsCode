#ifndef APLICA_PROMO_VALOR_H
#define APLICA_PROMO_VALOR_H

#include "Promo.h"
#include <iostream>

class AplicaPromoValor : public Promo{
	private: 
		Promo *next;
	public: 
		void aplicaPromo(Item *item) override;
		Promo *setNext(Promo *promo) override;
};

#endif // APLICA_PROMO_VALOR_H
