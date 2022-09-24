#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int vector[30];
	int suma = 0;
	float promedio;

	for (int i = 2; i <= 60; i = i + 2)
	{
		vector[i] = i;
		suma += i;
		cout << vector[i] << endl;
	}

	promedio = suma / 30;

	cout << "La suma total es: " << suma << endl;
	cout << "El promedio es: " << promedio << endl;

}
