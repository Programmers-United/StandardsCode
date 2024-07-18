#ifndef CORREIOFORMAENTREGASTRATEGY_H
#define CORREIOFORMAENTREGASTRATEGY_H

#include "StandardStrategy.h"
//Classe implmentando a estrat�gia

class CorreioFormaEntregaStrategy : public StandardStrategy {
public:
    float calcularFrete(Pedido* pedido) override;
};

#endif // CORREIOFORMAENTREGASTRATEGY_H

