#include <iostream>
using namespace std;

int main() {
    int numero, valor,valor2;

    valor = 14;
    valor2 = 21;
    cout << "Ingrese número: ";
    cin >> numero;

    for (int i = 7; i >= numero; i = i - 1) {
        
        valor -= 2;
        valor2 -= 3;
     
        cout << i << "         " << valor << "         " << valor2<<"\n";

    }

    cout << endl;
}