#include <iostream> // diretiva

using namespace std;

// Variáveis globais
// As variáveis globais podem ser acessadas de qualquer lugar
int n1, n2;

// Função principal
int main()
{ // inicio do bloco de funções
  // Escopo de utilização do Escopo
  // Toda variável declara dentro da função main irá somente funcionar nessa função
  // variáveis
  int n3, n4;
  int res;

  // Atribuição de valores
  n1 = 11;
  n2 = 3;
  n3 = 5;
  n4 = 2;

  // Operadores matemáticos: + - / * %
  // res = (n1 + n2 + n3 + n4) - 10/*Valor estático*/ ;
  res = n1 + n2 * n4;

  cout << "Soma de todas as variáveis: " << res << "\n\n";


  return 0;
} // fim do bloco de funções
