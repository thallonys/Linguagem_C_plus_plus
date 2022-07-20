#include <iostream>

int main()
{
    // variáveis
    int numero1{0};
    int numero2{0};
    int numero3{0};
    int numero4{0};
    int resultado{0};

    // limpa tela
    system("cls || clear");

    // input
    std::cout << "Entre com o primeiro número: ";
    std::cin >> numero1;

    std::cout << "Entre com o segundo número: ";
    std::cin >> numero2;

    std::cout << "Entre com o terceiro número: ";
    std::cin >> numero3;

    std::cout << "Entre com o quarto número: ";
    std::cin >> numero4;

    // cálculo
    resultado = numero1 + numero2 + numero3 + numero4;

    // output
    std::cout << "O resultado da soma é " << resultado << "." << std::endl;

    return 0;
}