#ifndef STRATEGY_H
#define STRATEGY_H

class Pedido;

//Declara��o da estrategia
class StandardStrategy {
public:
    virtual float calcularFrete(Pedido* pedido) = 0;
    virtual ~StandardStrategy() {}
};

#endif // STRATEGY_H

