#include "TransportadoraFormaEntregaStrategy.h"
#include "Pedido.h" // Include Pedido to resolve circular dependency

float TransportadoraFormaEntregaStrategy::calcularFrete(Pedido* pedido) {
    float valorTotal = 30.0;
    valorTotal += 4.0 * pedido->getPesoTotal();
    return valorTotal;
}

