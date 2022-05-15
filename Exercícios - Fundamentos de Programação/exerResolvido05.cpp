#include <iostream>

using namespace std;

int main() {
    // Variáveis
    float salario = 0;
    float percentualAumento = 0;
    float valorAumento = 0;
    float salarioNovo = 0;

    // Solicitar o valor do salário e percentual de aumento para o usuário
    cout << "Informe o valor do salario: ";
    cin >> salario;

    cout << "Informe o valor do percentual de aumento: ";
    cin >> percentualAumento;

    // Cálculo do novo salário
    percentualAumento = percentualAumento / 100;
    valorAumento = salario * percentualAumento;
    salarioNovo = salario + valorAumento;

    // Exibir o valor aumentado e o novo salário
    cout << "O valor aumentado e de R$ " << valorAumento << ".\n";
    cout << "O valor do novo salario e de R$ " << salarioNovo << ".\n";
}