#include <iostream>

using namespace std;

int main() {
    
    // Variáveis
    int num1;
    int num2;
    int num3;
    int num4;
    int res;

    // Solicitar que o usuário entre com os números
    cout << "Forneça o primeiro número: ";
    cin >> num1;

    cout << "Forneça o segundo número: ";
    cin >> num2;

    cout << "Forneça o terceiro número: ";
    cin >> num3;

    cout << "Forneça o quarto número: ";
    cin >> num4;

    res = num1 + num2 + num3 + num4;

    cout << "A soma dos números é " << res << ".\n";
}