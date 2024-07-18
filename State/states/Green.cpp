#include <iostream>
#include "Green.h"
#include "Yellow.h"

using namespace std;

Green::Green() {}

void Green::verifyStatus() {
    cout << "\n--------------------------------------\n";
    cout << "Cor do semáfaro identificado: Verde\n";
    cout << "Sistema de freios desabilitado...\n";
    cout << "---------------------------------------\n";
}

State* Green::next() {
    return new Yellow();
}