#ifndef STRATEGY_H
#define STRATEGY_H

class Pedido;

//Declaração da estrategia
class StandardStrategy {
public:
    virtual float calcularFrete(Pedido* pedido) = 0;
    virtual ~StandardStrategy() {}
};

#endif // STRATEGY_H

