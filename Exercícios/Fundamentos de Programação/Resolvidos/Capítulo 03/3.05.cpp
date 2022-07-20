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

    std::cout << "Entre com a porcentagem do aumento: ";
    std::cin >> aumento;

    // cálculo
    aumento = aumento / 100;
    novoSalario = salario + aumento * salario;

    // output
    std::cout << "O valor do novo salário é de R$ " << novoSalario << "." << std::endl;

    return 0;
}