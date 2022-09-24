#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main() {

	int cantidad, i, edad, suma, promedio, sueldo, mayor, menor, men;

	cout << "Ingresa cantidad de personas: ";
	cin >> cantidad;

	i = 0;
	suma = 0;


	while (i < cantidad) {
		i++;
		edad = 20 + rand() % (45 + 1 - 20); 
		sueldo = 930 + rand() % 5001; 

		cout << "\nPersona " << i << ": ";
		cout << "\nTiene " << edad << " años";
		cout << "\nTiene un sueldo de: S/." << sueldo;
		cout << "\n***************************************\n";

		if (i == 1) {
			menor = sueldo;
			mayor = sueldo;
		}
		if (sueldo < menor) menor = sueldo;
		if (sueldo > mayor) mayor = sueldo;

		if (i == 1) {
			men = edad;
		}
		if (edad < men) men = edad;

		suma += edad;
		promedio = suma / cantidad;

	}
	cout << "\nLa persona con menor suedo es: "<< menor;
	cout << "\nLa persona con mayor sueldo es: " << mayor << "\n";
	cout << "\n***************************************\n";
	cout << "\nLa persona más joven es: " << men;
	cout << "\nLa persona con edad promedio es: " << promedio<<endl;

}

