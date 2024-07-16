#ifndef PDF_GENERATOR_H
#define PDF_GENERATOR_H

#include "DocumentGenerator.h"
#include <string> 

class PDFGenerator : public DocumentGenerator {
protected:
    void printDocument() override;

private:
    std::string content; 
};

#endif
