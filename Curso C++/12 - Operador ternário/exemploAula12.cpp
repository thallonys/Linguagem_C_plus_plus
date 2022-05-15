#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    // (expressão) ? valor1 : valor2;

    int n1, n2, nota;
    string res;

    // Limpa a tela
    system("cls");

    cout << "Digite a primeir a nota: ";
    cin >> n1;

    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota = n1 + n2;

    // >= 60    aprovado
    // < 60     reprovado

    // Esse operador ternário é mais útil para verificação simples.
    // Quando comprado somente duas coisas.
    // (nota >= 60) ? res = "Aprovado" : res = "Reprovado";
    res = (nota >= 60) ? "Aprovado" : "Reprovado";

    cout << "\nSituacao do aluno: " << res << ".\n" << endl;
    
}