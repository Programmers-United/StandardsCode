#ifndef APLICA_PROMO_ESPECIAL_H
#define APLICA_PROMO_ESPECIAL_H

#include "Promo.h"
#include <iostream>
class AplicaPromoEspecial : public Promo{
	private:
		Promo *next;
	public:
		void aplicaPromo(Item *item) override;
		Promo *setNext(Promo *promo) override;
};

#endif // APLICA_PROMO_ESPECIAL_H
