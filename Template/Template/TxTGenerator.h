#ifndef TXT_GENERATOR_H
#define TXT_GENERATOR_H

#include "DocumentGenerator.h"

class TxTGenerator : public DocumentGenerator {
protected:
    void printDocument() override;
};

#endif