#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int n1, n2, res;
    char opc;

    inicio:

    // Comando do dos para limpar a tela
    system ("cls");

    cout << "Digite o valor da nota 1: ";
    cin >> n1;

    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res = n1 + n2;

    if(res >= 60) {
        cout << "\nAluno aprovado\n" << endl;
    } else if(res >= 40) {
        cout << "\nAluno em recuperacao\n" << endl;
    } else {
        cout << "\nAluno reprovado\n" << endl;
    }

    cout << "\nDigitar outras notas?[s/n]: ";
    cin >> opc;

    if(opc == 's' || opc == 'S') {
        goto inicio;
    }
}