#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	int cantidad, nota,promedio,suma,i,cantapro,candesa;

	cout << "Ingrese cantidad de estudiantes: ";
	cin >> cantidad;

	i = 0;
	cantapro = 0;
	candesa = 0;
	suma = 0;

	cout << "\n*************************************************************\n";

	while (i < cantidad) {
		i++;
		nota = rand() % 21;
		cout << "\nNOTA DE ESTUDIANTE " << i << ": " << nota;

		suma += nota;
		promedio = suma / cantidad;

		if (nota >= 11) {
			++cantapro;
		}
		else {
			++candesa;
		}	
	}
	cout << endl;
	cout << "\n*************************************************************\n";

	cout << "\nLa nota promedio es : " << promedio;
	cout << "\nLa cantidad de aprobados es: " << cantapro;
	cout << "\nLa cantidad de desaprobados es: " << candesa;

	cout << endl;
}