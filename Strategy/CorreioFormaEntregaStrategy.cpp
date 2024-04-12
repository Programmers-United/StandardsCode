#include "CorreioFormaEntregaStrategy.h"
#include "Pedido.h" // Include Pedido to resolve circular dependency

float CorreioFormaEntregaStrategy::calcularFrete(Pedido* pedido) {
    float valorTotal = 15.0;
    if(pedido->getPesoTotal() >= 3.5){
    	valorTotal += 1.5 * pedido->getPesoTotal();	
	}
    return valorTotal;
}
