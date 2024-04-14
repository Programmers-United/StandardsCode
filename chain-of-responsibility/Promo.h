#ifndef MANIPULADOR_H
#define MANIPULADOR_H

#include "Item.h"

class Promo{
	public: 
		virtual Promo *setNext(Promo *promo) = 0;
		virtual void aplicaPromo (Item *item) = 0;
};

#endif // MANIPULADOR_H
