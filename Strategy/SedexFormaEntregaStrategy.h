#ifndef SEDEXFORMAENTREGASTRATEGY_H
#define SEDEXFORMAENTREGASTRATEGY_H

#include "StandardStrategy.h"

//Classe implmentando a estrat�gia
class SedexFormaEntregaStrategy : public StandardStrategy {
public:
    float calcularFrete(Pedido* pedido) override;
};

#endif // SEDEXFORMAENTREGASTRATEGY_H

