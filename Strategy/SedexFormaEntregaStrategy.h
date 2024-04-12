#ifndef SEDEXFORMAENTREGASTRATEGY_H
#define SEDEXFORMAENTREGASTRATEGY_H

#include "StandardStrategy.h"

//Classe implmentando a estratégia
class SedexFormaEntregaStrategy : public StandardStrategy {
public:
    float calcularFrete(Pedido* pedido) override;
};

#endif // SEDEXFORMAENTREGASTRATEGY_H

