#ifndef DOCUMENT_GENERATOR_H
#define DOCUMENT_GENERATOR_H

class DocumentGenerator {
public:
    // Método template que define o esqueleto do algoritmo
    void generateDocument();

protected:
    // Operação primitiva que será implementada pelas subclasses
    virtual void printDocument() = 0;
};

#endif