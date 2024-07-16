#include "TxTGenerator.h"
#include <iostream>
#include <fstream>


void TxTGenerator::printDocument() {
    std::ofstream outFile("output.txt");
    if (outFile.is_open()) {
        outFile << "Olá, este é um .txt!\n";
        outFile.close();
    }
    else {
        std::cerr << "Erro ao abrir arquivo\n";
    }
}