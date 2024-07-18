#include <iostream>
#include "Red.h"
#include "Green.h"

using namespace std;

Red::Red() {}

void Red::verifyStatus() {
    cout << "\n--------------------------------------\n";
    cout << "Cor do semáfaro identificado: Vermelho\n";
    cout << "Sistema de freios ativado...\n";
    cout << "Freando fortemente...\n";
    cout << "---------------------------------------\n";
}

State* Red::next() {
    return new Green();
}