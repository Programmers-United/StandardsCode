#include <iostream>
#include "BrakingSystem.h"

using namespace std;

void printMenu() {
    cout << "\n[1] - Verificar sistema de freios\n";
    cout << "[2] - Próximo estado do sistema de freios\n";
    cout << "[0] - Sair\n";
    cout << "\nEscolha: ";
}

int main() {

    BrakingSystem brakingSystem = BrakingSystem();

    int choise = 1;
    do {
        printMenu();
        cin >> choise;

        switch (choise) {
            case 1:
                brakingSystem.getInfo();
                break;
            case 2:
                brakingSystem.nextState();
                cout << "\nAlterando estado do sistema de freios...\n";
                break;
            case 0:
                break;
            default:
                cout << "\nOpção inválida!\n";
        }

    } while (choise);
    
    return 0;
}