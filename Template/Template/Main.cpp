#include "PDFGenerator.h"
#include "TxTGenerator.h"
#include <iostream>
#include <memory>

void displayMenu() {
    std::cout << "=========================\n";
    std::cout << "Hiper Gerador de Documentos\n";
    std::cout << "=========================\n";
    std::cout << "1. Gerar PDF\n";
    std::cout << "2. Gerar Word\n";
    std::cout << "3. Fechar\n";
    std::cout << "Digite o numero de sua escolha: ";
}

int main() {
    bool rodando = true;
    
        while (rodando) {
            displayMenu();
            int escolha;
            std::cin >> escolha;
            std::unique_ptr<DocumentGenerator> documentGenerator;
            switch (escolha) {
                case 1:
                    documentGenerator = std::make_unique<PDFGenerator>();
                    documentGenerator->generateDocument();
                case 2:
                    documentGenerator = std::make_unique<TxTGenerator>();
                    documentGenerator->generateDocument();
                    break;
                case 3:
                    rodando = false;
                    break;
                default:
                    std::cout << "Escolha inválida";
                    break;
            }
            std::cout << "\n";
    } 
    return 0;
}