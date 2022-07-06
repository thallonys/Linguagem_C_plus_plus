#include <iostream>

using namespace std;

int main() {
  // Variáveis notas
  int nota1;
  int nota2;
  int nota3;
  int media;

  // Solicitar notas ao usuário
  cout << "Insira a primeira nota: ";
  cin >> nota1;

  cout << "Insira a segunda nota: ";
  cin >> nota2;

  cout << "Insira a terceira nota: ";
  cin >> nota3;

  // Cálculo da media
  media = (nota1 + nota2 + nota3) / 3;

  // Exibir média
  cout << "O valor da média é " << media << ".\n";
}
