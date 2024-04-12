#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

//Declaracao da classe produto
class Produto {
private:
    std::string descricao;
    float preco;
    float peso;

public:
    Produto(std::string descricao, float preco, float peso);
    std::string getDescricao();
    void setDescricao(std::string descricao);
    float getPreco();
    void setPreco(float preco);
    float getPeso();
    void setPeso(float peso);
};

#endif // PRODUTO_H

