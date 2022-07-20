#include <iostream>

int main()
{
    // variáveis
    float nota1{0};
    float nota2{0};
    float nota3{0};
    float resultado{0};

    // limpa tela
    system("cls || clear");

    // input
    std::cout << "Entre com a primeira nota: ";
    std::cin >> nota1;

    std::cout << "Entre com a segunda nota: ";
    std::cin >> nota2;

    std::cout << "Entre com a terceira nota: ";
    std::cin >> nota3;

    // cálculo
    resultado = (nota1 + nota2 + nota3) / 3;

    // output
    std::cout << "O resultado da média é " << resultado << "." << std::endl;

    return 0;
}