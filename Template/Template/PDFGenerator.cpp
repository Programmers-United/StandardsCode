#include "PDFGenerator.h"
#include "mpdf/mpdf.h"
#include <iostream>

void PDFGenerator::printDocument() {
    std::cout << "Preparando conte�do...\n";
    std::string content = "Ol�, este � um PDF!";

    std::cout << "Imprimindo PDF...\n";
    generatePDF(content);
    std::cout << "Documento PDF criado com sucesso.\n";
}