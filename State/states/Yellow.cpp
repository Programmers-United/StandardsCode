#include <iostream>
#include "Yellow.h"
#include "Red.h"

using namespace std;

Yellow::Yellow() {}

void Yellow::verifyStatus() {
    cout << "\nCor do semáfaro identificado: Amarelo\n";
    cout << "Sistema de freios ativado...\n";
    cout << "Freando levemente...\n";
    cout << "Preste atenção o sinal está fechando!\n";
}

State Yellow::next() {
    return Red();
}