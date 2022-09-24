#include<iostream>
#include <math.h>

using namespace std;


int main() {

	int n, horas,extra, i;
	float paga;
	
	cout << "Cantidad de obreros: ";
	cin >> n;

	for (i = 1; i < n; i++) {

		cout << "\nIngresar numero de horas del obrero[" << i << "]: ";
		cin >> horas;
		
		if (horas <= 40) {
			paga = 20 * horas;
		}
		else {
			extra = horas - 40;
			paga = (40 * 20) + (extra * 25);
		}

		cout << "\nEl sueldo es:S/." << paga<<endl;

	}
}
	
	