#include <iostream>
#include "Red.h"
#include "Green.h"

using namespace std;

Red::Red() {}

void Red::verifyStatus() {
    cout << "\nCor do semáfaro identificado: Vermelho\n";
    cout << "Sistema de freios ativado...\n";
    cout << "Freando levemente...\n";
    cout << "Preste atenção o sinal está fechando!\n";
}

State* Red::next() {
    return new Green();
}