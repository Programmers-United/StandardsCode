//Implementacao da classe Pedido
#include "Pedido.h"

Pedido::Pedido(StandardStrategy* standardStrategy) : standardStrategy(standardStrategy) {}

void Pedido::addProduto(Produto* p) {
    produtos.push_back(p);
}

float Pedido::getValorTotal() {
    float valorTotal = 0.0;
    valorTotal += standardStrategy->calcularFrete(this);
    for (std::vector<Produto*>::iterator it = produtos.begin(); it != produtos.end(); ++it) {
        valorTotal += (*it)->getPreco();
    }
    return valorTotal;
}

float Pedido::getPesoTotal() {
    float pesoTotal = 0.0;
    for (std::vector<Produto*>::iterator it = produtos.begin(); it != produtos.end(); ++it) {
        pesoTotal += (*it)->getPeso();
    }
    return pesoTotal;
}
