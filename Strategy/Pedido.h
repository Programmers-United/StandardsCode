#ifndef PEDIDO_H
#define PEDIDO_H

#include "StandardStrategy.h"
#include "Produto.h"

#include <vector>

//Declaracao da classe Pedido
class Pedido {
private:
    StandardStrategy* standardStrategy;
    std::vector<Produto*> produtos;

public:
    Pedido(StandardStrategy* standardStrategy);
    void addProduto(Produto* p);
    float getValorTotal();
    float getPesoTotal();
};

#endif // PEDIDO_H

