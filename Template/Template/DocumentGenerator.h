#ifndef DOCUMENT_GENERATOR_H
#define DOCUMENT_GENERATOR_H

class DocumentGenerator {
public:
    // M�todo template que define o esqueleto do algoritmo
    void generateDocument();

protected:
    // Opera��o primitiva que ser� implementada pelas subclasses
    virtual void printDocument() = 0;
};

#endif