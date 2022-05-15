#include <iostream>

using namespace std;

int main() {

    int num1 = 10;
    int num2 = 50;
    int sol = 1;
    char opc = 's';

    // se o teste for verdadeiro
    if (num1 >= 10) {
        cout << "Valor de num e maior ou igual a 10." << endl;
    }

    if(num1 < num2) {
        cout << "Resultado Verdadeiro." << endl;
    } else {
        cout << "Resultado Falso." << endl;
    }

    if(sol == 1) {
        cout << "Vou ao clube." << endl;
    } else {
        cout << "Vou ao cinema." << endl;
    }
}