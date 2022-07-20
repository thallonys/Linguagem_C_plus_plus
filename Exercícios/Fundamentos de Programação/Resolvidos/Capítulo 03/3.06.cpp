#include <iostream>

int main()
{
    // variáveis
    float salarioBase{0};
    float salarioLiquido{0};
    float imposto{0};
    float aumento{0};

    // limpa tela
    system("cls || clear");

    // input
    std::cout << "Entre com o valor do salário base: ";
    std::cin >> salarioBase;

    // cálculo
    aumento = 0.05;
    imposto = 0.07;
    salarioLiquido = salarioBase + aumento * salarioBase - imposto * salarioBase;

    // output
    std::cout << "O salário líquido é de R$ " << salarioLiquido << "." << std::endl;

    return 0;
}