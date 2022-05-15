#include <iostream>

using namespace std;

int main() {

  int n1, n2;

  n1 = 0;
  n2 = 10;

  cout << n1 << "\n\n";
  // Formas de incremento
  // n1 = n1 + 1;
  n1 += 1; // Forma direta
  // n1 *= 2; multiplica n1 por 2
  // n1 /= 2; divide n1 por 2
  // n1++ incremente uma unidade
  // n1-- decrementa uma unidade

  // n1++ pos-fixado
  // ++n1 pré-fixado

  // Em uma declaração cout, n1++ vai mostrar o valor de n1 sem o incremento
  // Porém, fazendo ++n1 mostra o valor incrementado, pois primeiro ocorre o incremento
  cout << n1 << "\n\n";
  return 0;
}
