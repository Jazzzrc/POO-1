#include<iostream>
using namespace std;
int const CANTIDAD = 5;

int aprobado=0,desaprobado=0;

void entradaDatos(int nota[])
{
	for (int i = 0; i < CANTIDAD; i++)
	{
		cout << "Ingresar Nota(" << i << "):";
		cin >> nota[i];
	}
}

void listarVector(int nota[])
{
	cout << "Listar las notas:\n";
	cout << "*******\n";
	for (int i = 0; i < CANTIDAD; i++)
	{
		cout << nota[i] << endl;
	}

}
 void clasi(int nota[]){

 	cout<<"\nAPROBADOS Y DESAPROBADOS\n";

 	for (int i = 0; i < CANTIDAD; i++){
 	if(nota[i]>=11){
	cout<<nota[i]<<"   Aprobado\n";
	}

	else{
		cout<<nota[i]<<"   Desaprobado\n";
	}
	 }


 }

int obtenerMayor(int nota[]){
	int maximo = nota[0];
	for (int i=1; i<5;i++)
	{
		if(maximo<nota[i])
		{
			maximo =nota[i];

		}
	}
	return maximo;
}


float Promedio(int n[])
{
	int 	i = 0;
	float 	suma = 0;

	while (i < CANTIDAD)
	{
		suma += n[i];
		++i;
	}
	return suma / i;
}

float mayorespromedio(int nota[]){

	int i=0;
	cout<<"\nListado de Mayores al promedio: \n";

	for(i=0;i<5;i++)
	{
		if(nota[i]>Promedio(nota)){
		cout<<nota[i]<<"\n";
		}

	}

}

float menorespromedio(int nota[])
{

	int i=0;
	cout<<"\nListado de Menores al promedio: \n";

	for(i=0;i<5;i++)
	{
			if(nota[i]<Promedio(nota))
			{
				cout<<nota[i]<<"\n";
			}

	}

}


int main() {
	//Declaracion de variables
	int nota[20];
	int i;


	entradaDatos(nota);
	cout << "\n";
	listarVector(nota);
	mayorespromedio(nota);
	menorespromedio(nota);
    clasi(nota);


	cout << "\nEl promedio es:" << Promedio(nota) << endl;
	cout<<"\nEl numero maximo es: "<<	obtenerMayor(nota)<<endl;

}
