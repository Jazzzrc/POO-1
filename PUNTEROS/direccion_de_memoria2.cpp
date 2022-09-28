#include <iostream>
using namespace std;
int suma(int a, int b);
int multiplicacion(int a, int b);
void operaciones(int a, int b, int *x,int *m);
int main()
{
	cout<<"La suma es: "<<suma(2,5)<<endl;
	cout<<"La multiplicacion es: "<<multiplicacion(2,5)<<endl;

	int s = 0, multiplicacion = 0;
	operaciones(2,2,&s,&multiplicacion);
	cout<<"La direccion de memoria de s: "<<&s<<endl;
	cout<<"La suma es: "<<s<<endl;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}

void operaciones(int a, int b, int *x, int *m)
{
	cout<<"La direccion de la memoria de x: "<<&x<<endl;
	*x = a + b;
	*m = a + b;
}
int suma(int a, int b)
{
	return a + b;
}
int multiplicacion(int a, int b)
{
	return a*b;
}
