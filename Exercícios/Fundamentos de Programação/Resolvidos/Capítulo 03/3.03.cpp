#include <iostream>

int main()
{
    // variáveis
    float nota1{0};
    float nota2{0};
    float nota3{0};
    float peso1{0};
    float peso2{0};
    float peso3{0};
    float resultado{0};

    // limpa tela
    system("cls || clear");

    // input
    std::cout << "Entre com a nota 1: ";
    std::cin >> nota1;

    std::cout << "Entre com o peso 1: ";
    std::cin >> peso1;

    std::cout << "Entre com a nota 2: ";
    std::cin >> nota2;

    std::cout << "Entre com o peso 2: ";
    std::cin >> peso2;

    std::cout << "Entre com a nota 3: ";
    std::cin >> nota3;

    std::cout << "Entre com o peso 3: ";
    std::cin >> peso3;

    // cálculo
    resultado = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    //output
    std::cout << "O resultado da média ponderada é " << resultado << "." << std::endl;

    return 0;
} // fim da função principal