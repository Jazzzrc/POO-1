#include <iostream>
using namespace std;

/*Este codigo imprime una tabla con números multiplos de 4
Ejemplo:
  1		4
  2		8
  3		12
  4		16	
  .		.
  .		.
  100	400


*/



int main() {
    int numero,valor;

    valor = 0;
    cout << "Ingrese numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {

        valor += 4;

        cout << "\n" << i << "    "<<valor;
    }
    cout << endl;
}
