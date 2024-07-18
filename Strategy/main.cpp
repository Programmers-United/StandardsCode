#include <iostream>
#include "Pedido.h"
#include "Produto.h"
#include "SedexFormaEntregaStrategy.h"
#include "TransportadoraFormaEntregaStrategy.h"
#include "CorreioFormaEntregaStrategy.h"

int main() {
    // Criando alguns produtos
    Produto* produto1 = new Produto("Produto 1", 10.0, 1.5);
    Produto* produto2 = new Produto("Produto 2", 20.0, 0.5);
    Produto* produto3 = new Produto("Produto 3", 15.0, 1.0);

    // Criando uma estratégia de entrega Sedex
    StandardStrategy* sedexStrategy = new SedexFormaEntregaStrategy();
    
    //Criando uma estratégia de entrega Transportadora
	StandardStrategy* trasportadoraStrategy = new TransportadoraFormaEntregaStrategy();

	//Criando uma estratégia de entraga Correio
	StandardStrategy* correioStrategy = new CorreioFormaEntregaStrategy();
	
    // Criando um pedido e adicionando produtos
    Pedido* pedido = new Pedido(sedexStrategy);
    pedido->addProduto(produto1);
    pedido->addProduto(produto2);
    pedido->addProduto(produto3);
    
    //Criando um segundo pedido de produtos
    Pedido* pedidoTwo = new Pedido(trasportadoraStrategy);
    pedidoTwo->addProduto(produto1);
    pedidoTwo->addProduto(produto2);
    pedidoTwo->addProduto(produto3);

	//Criando um terceiro pedido de produtos
	Pedido* pedidoThree = new Pedido(correioStrategy);
	pedidoThree->addProduto(produto1);
    pedidoThree->addProduto(produto2);
    pedidoThree->addProduto(produto3);
    
    // Calculando e exibindo o valor total do pedido
    std::cout << "Valor total do pedido com o Sedex: R$" << pedido->getValorTotal() << std::endl;
    std::cout << "Valor total do pedido com o Correio: R$" << pedidoThree->getValorTotal() << std::endl;
    std::cout << "Valor total do pedido com o Transportadora: R$" << pedidoTwo->getValorTotal() << std::endl;
    
    // Limpando a memória
    delete pedido;
    delete pedidoTwo;
    delete pedidoThree;
    delete sedexStrategy;
    delete correioStrategy;
    delete trasportadoraStrategy;
    delete produto1;
    delete produto2;
    delete produto3;

    return 0;
}

