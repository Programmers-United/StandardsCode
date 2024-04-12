#ifndef TRASNPORTADORAFORMAENTREGASTRATEGY_H
#define TRASNPORTADORAFORMAENTREGASTRATEGY_H

#include "StandardStrategy.h"
//Classe implmentando a estrat�gia

class TransportadoraFormaEntregaStrategy : public StandardStrategy {
public:
    float calcularFrete(Pedido* pedido) override;
};

#endif // TRASNPORTADORAFORMAENTREGASTRATEGY_H

