#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int num;

    num = 5;

    // Limpa a tela
    system("cls");

    // uso de &&, || e !variável
    if(num < 3 || num > 8) {
        cout << "\n\nValor aceito.\n";
    } else {
        cout << "\n\nNao aceito.\n";
    }
}