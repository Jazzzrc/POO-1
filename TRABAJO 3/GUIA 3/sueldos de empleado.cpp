#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	int cantidad, i, sueldos, mas, menos, suma, promedio;

	cout << "\nIngresa cantidad de empleados: ";
	cin >> cantidad;
	cout << endl << "************************************************" << endl;

	mas = 0;
	menos = 0;
	i = 0;
	suma = 0;

	while (i < cantidad) {

		i++;
		sueldos = 2500 + rand() % 3501;
		cout << "\nSueldo de empleado " << i << " : S / ." << sueldos << endl;
		suma += sueldos;
		promedio = suma / cantidad;

		if (sueldos > 3000) {
			++mas;

		}
		else if (sueldos <= 3000) {
			++menos;
		}
	}

	cout << endl << "************************************************" << endl;

	cout << "\El sueldo promedio es: S/." << promedio<<"\n";
	cout << "\nLa cantidad de empleados que ganan más de 3000: " << mas<<"\n";
	cout << "\nLa cantidad de empleados que ganan menos o igual que 3000: " << menos<<"\n";
	cout << endl;


}