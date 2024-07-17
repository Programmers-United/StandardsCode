#include <iostream>
#include "Green.h"
#include "Yellow.h"

using namespace std;

Green::Green() {}

void Green::verifyStatus() {
    cout << "\nCor do semáfaro identificado: Verde\n";
    cout << "Sistema de freios desabilitado...\n";
}

State Green::next() {
    return Yellow();
}