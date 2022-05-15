#include <iostream>

using namespace std;

int main() {
  // Variáveis
  // Tipo nome;
  // Tipo nome = valor;
  int vidas = 0; // recebe  números inteiros
  char letra = 'B'; // recebe um caractere
  double decimal = 5.2; // recebe números reais
  float decimal2 = 5.2; // igual ao double, porém com precisão menor
  bool vivo = true; // booleano. Verdadeiro ou falso
  string nome = "Thallonys"; // rebece uma cadeira de caracteres

  // Ler valores
  cout << "Digite o numeros de vidas: ";
  cin >> vidas;

  cout << "Digite uma letra: ";
  cin >> letra;

  cout << "Digite um valor decimal: ";
  cin >> decimal;

  cout << "Digite outro valor para o decimal: ";
  cin >> decimal2;

  cout << "Mostrando o status vivo: " << vivo << "\n";

  cout << "Digite um nome: ";
  cin >> nome;
/*
  cout << vidas << "\n";
  cout << letra << "\n";
  cout << decimal << "\n";
  cout << decimal2 << "\n";
  cout << vivo << "\n";
  cout << nome << "\n";
*/


  return 0;
}
