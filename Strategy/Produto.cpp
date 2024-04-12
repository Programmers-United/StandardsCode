//Implmentacao da classe produto
#include "Produto.h"

Produto::Produto(std::string descricao, float preco, float peso) : descricao(descricao), preco(preco), peso(peso) {}

std::string Produto::getDescricao() {
    return descricao;
}

void Produto::setDescricao(std::string descricao) {
    this->descricao = descricao;
}

float Produto::getPreco() {
    return preco;
}

void Produto::setPreco(float preco) {
    this->preco = preco;
}

float Produto::getPeso() {
    return peso;
}

void Produto::setPeso(float peso) {
    this->peso = peso;
}

