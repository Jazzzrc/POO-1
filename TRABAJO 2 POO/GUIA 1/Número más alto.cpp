#include <iostream>
using namespace std;

int main() {

	int cantidad,numero, i, mayor;

	cout << "Ingresa cantidad de numeros: ";
	cin >> cantidad;

	cout << "\n**********************************\n";

	i = 0;

	while (i < cantidad) {
		i++;
		cout << "\nIngresar numero[" << i << "]: ";
		cin >> numero;
		if (i == 1) {
			mayor = numero;
		 }
		if (numero > mayor) mayor = numero;
	}
	cout << "\n**********************************\n";

	cout << "\nEl mayor numero es: " << mayor << endl;

}