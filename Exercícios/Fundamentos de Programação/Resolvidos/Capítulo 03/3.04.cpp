#include <iostream>

int main()
{
    // variáveis
    float salario{0};
    float aumento{0};
    float novoSalario{0};

    // limpa tela
    system("cls || clear");

    // input
    std::cout << "Entre com o valor do salário: ";
    std::cin >> salario;

    // cálculo
    aumento = 0.25;
    novoSalario = salario + aumento * salario;

    // output
    std::cout << "O valor do novo salário é de R$ " << novoSalario << "," << std::endl;

    return 0;
}