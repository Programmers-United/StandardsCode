#include "SedexFormaEntregaStrategy.h"
#include "Pedido.h" // Include Pedido to resolve circular dependency

float SedexFormaEntregaStrategy::calcularFrete(Pedido* pedido) {
    float valorTotal = 50.0;
    valorTotal += 2.5 * pedido->getPesoTotal();
    return valorTotal;
}

