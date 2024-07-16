#include "PDFGenerator.h"
#include "mpdf/mpdf.h"
#include <iostream>

void PDFGenerator::printDocument() {
    std::cout << "Preparando conteúdo...\n";
    std::string content = "Olá, este é um PDF!";

    std::cout << "Imprimindo PDF...\n";
    generatePDF(content);
    std::cout << "Documento PDF criado com sucesso.\n";
}