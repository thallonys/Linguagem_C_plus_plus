#include <iostream>

using namespace std;

int main() {

    // Variáveis
    int salarioAtual = 0;
    int salarioNovo = 0;
    float porcentagemAumento = 0;

    // Solicitar inserção do valor do salário pelo usuário
    cout << "Informe o salario: ";
    cin >> salarioAtual;

    porcentagemAumento = 0.25;
    cout << "O valor da porcentagem de aumento e de " << porcentagemAumento << ".\n";

    // Cálculo do salário
    salarioNovo = salarioAtual + (salarioAtual * porcentagemAumento);

    // Exibir novo salario
    cout << "O novo salario e de " << salarioNovo << ".\n";
}