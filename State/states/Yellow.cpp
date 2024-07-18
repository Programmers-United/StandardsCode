#include <iostream>
#include "Yellow.h"
#include "Red.h"

using namespace std;

Yellow::Yellow() {}

void Yellow::verifyStatus() {
    cout << "\n--------------------------------------\n";
    cout << "Cor do semáfaro identificado: Amarelo\n";
    cout << "Sistema de freios ativado...\n";
    cout << "Freando levemente...\n";
    cout << "Preste atenção o sinal está fechando!\n";
    cout << "---------------------------------------\n";
}

State* Yellow::next() {
    return new Red();
}