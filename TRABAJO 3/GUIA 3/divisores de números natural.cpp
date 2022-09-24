#include <iostream>
using namespace std;

int main() {

	int numero, i, cantidad,suma;

	cantidad = 0;


	cout << "Ingresar número: "<<"\n";
	cin >> numero;

	cout << "\n**************************************************\n";


	for (i = 1; i <= numero; i++) {

		if (numero % i == 0) {

			cout << i << "\n";

			++cantidad;
			
		}
	}
	cout << "\n**************************************************\n";


	cout << "\nLa cantidad de divisores es: " << cantidad<<endl;
}