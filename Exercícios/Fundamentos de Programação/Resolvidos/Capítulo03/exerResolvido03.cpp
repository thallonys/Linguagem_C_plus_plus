#include <iostream>

using namespace std;

int main() {
    // Variáveis notas e pesos
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float peso1 = 0;
    float peso2 = 0;
    float peso3 = 0;
    float media = 0;

    // Solicitar pesos para o usuário
    cout << "Informe o valor do primeiro peso: ";
    cin >> peso1;

    cout << "Informe o valor do segundo peso: ";
    cin >> peso2;

    cout << "Informe o valor do terceiro peso: ";
    cin >> peso3;

    // Solicitar notas ao usuário
    cout << "Insira a primeira nota: ";
    cin >> nota1;

    cout << "Insira a segunda nota: ";
    cin >> nota2;

    cout << "Insira a terceira nota: ";
    cin >> nota3;

    // Cálculo da média ponderada
    media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3);

    // Exibir o resultado da média ponderada
    cout << "O valor da média ponderda é " << media << ".\n";

}