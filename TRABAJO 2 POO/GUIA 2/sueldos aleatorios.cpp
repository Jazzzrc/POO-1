#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	int cantidad, sueldos, suma, promedio, i,can1750,can17502500, can2500;
	

	cout << "Ingrese número de empleados: ";
	cin >> cantidad;

	i = 0;
	suma = 0;
	can1750 = 0;
	can17502500 = 0;
	can2500 = 0;



	cout << "\n***********************************************" << endl;

	while (i < cantidad) {

		i++;
		sueldos = 850 + rand() % 3151;
		cout << "Sueldo de trabajador " << i << ":   S/." << sueldos << endl;

		suma += sueldos;
		promedio = suma / cantidad;

		if (sueldos < 1750) {
			++can1750;
		}

		if (sueldos >= 1750 && sueldos < 2500) {
			++can17502500;
		}
		
		if (sueldos >= 2500) {
			++can2500;
		}

	}

	cout << "\n***********************************************" << endl;

	cout << "\nEl sueldo promedio es: S/." << promedio<<endl;

	cout << "\nCantidad de empleados que ganan menos de S/. 1750: .................................. " << can1750;
	cout << "\nCantidad de empleados que ganan no menos de S/. 1750 pero menos de  S/. 2500: ....... " << can17502500;
	cout << "\nCantidad de empleados que ganan no menos de S/. 2500: ............................... " << can2500<<endl;


}