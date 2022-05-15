#include <iostream>

using namespace std;

int main() {

    int num  = 10;

    cout << num << "\n\n";

    // Jeito tradicional
    // num = num * -1;
    // Jeito fácil e definitivo de converter
    num = -num;

    // Alteração momentanea. Não salva na variável
    //cout << -num << "\n\n" << endl;
    cout << num << "\n\n" << endl;

}