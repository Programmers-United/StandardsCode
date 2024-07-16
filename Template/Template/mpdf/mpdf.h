#ifndef MPDF_H
#define MPDF_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void generatePDF(const std::string& content) {
    std::ofstream outFile("output.pdf", std::ios::binary);

    if (!outFile.is_open()) {
        std::cerr << "N�o foi poss�vel abrir o arquivo.\n";
        return;
    }

    std::ostringstream pdf;

    // cabe�alho do PDF
    pdf << "%PDF-1.4\n";

    // Objeto 1: Cat�logo
    pdf << "1 0 obj\n"
        << "<< /Type /Catalog /Pages 2 0 R >>\n"
        << "endobj\n";

    // Objeto 2: P�ginas
    pdf << "2 0 obj\n"
        << "<< /Type /Pages /Kids [3 0 R] /Count 1 >>\n"
        << "endobj\n";

    // Objeto 3: P�gina
    pdf << "3 0 obj\n"
        << "<< /Type /Page /Parent 2 0 R /MediaBox [0 0 612 792] /Contents 4 0 R /Resources << /Font << /F1 5 0 R >> >> >>\n"
        << "endobj\n";

    // Objeto 4: Conte�do
    std::ostringstream contentStream;
    contentStream << "BT /F1 24 Tf 100 700 Td (" << content << ") Tj ET";

    std::string contentStr = contentStream.str();
    pdf << "4 0 obj\n"
        << "<< /Length " << contentStr.length() << " >>\n"
        << "stream\n"
        << contentStr << "\n"
        << "endstream\n"
        << "endobj\n";

    // Objeto 5: Fonte
    pdf << "5 0 obj\n"
        << "<< /Type /Font /Subtype /Type1 /BaseFont /Arial /Encoding /WinAnsiEncoding >>\n"
        << "endobj\n";

    // Refer�ncia de tabelas
    std::streamoff xrefPos = pdf.tellp();
    pdf << "xref\n"
        << "0 6\n"
        << "0000000000 65535 f \n"
        << "0000000010 00000 n \n"
        << "0000000079 00000 n \n"
        << "0000000178 00000 n \n"
        << "0000000328 00000 n \n"
        << "0000000454 00000 n \n";

    // Trailer
    pdf << "trailer\n"
        << "<< /Size 6 /Root 1 0 R >>\n"
        << "startxref\n"
        << xrefPos << "\n"
        << "%%EOF";

    // Escrever arquivo
    outFile << pdf.str();
    outFile.close();
}

#endif