#include <iostream>
using namespace std;

void seleccion(int n[]);
void listar(int n[]);
void insercion(int A[]);
void busquedaBinaria(int dato, int n[]);
int main()
{
	int n[5] = {12,5,50,96,2};
	int opt;
	do
	{
		cout<<"############ MENU DE OPCIONES #############\n";
		cout<<"##### Ordenamiento por seleccion--[1] #####\n";
		cout<<"##### Ordenamiento por insercion--[2] #####\n";
		cout<<"##### Busqueda Binaria------------[3] #####\n";
		cout<<"##### Salir-----------------------[4] #####\n";
		cout<<"Ingresar una opcion:";
		cin>>opt;
		switch(opt)
		{
			case 1: system("cls");
					seleccion(n);
					listar(n);
					system("pause");
					system("cls");
			break;
			case 2: system("cls");
					insercion(n);
					listar(n);
					system("pause");
					system("cls");
					break;
			case 3: system("cls");
					int datoABuscar;
					cout<<"INGRESE DATO A BUSCAR:";
					cin>>datoABuscar;
					insercion(n);
					busquedaBinaria(datoABuscar,n);
					system("pause");
					system("cls");
					break;
			case 4: system("cls");
					cout<<"***** GRACIAS *****";
					break;
			default:system("cls");
					cout<<"Ingrese una opcion entre [1-4]";
					system("pause");
					system("cls");
		}
	}
	while(opt!=4);
}

void seleccion(int n[])
{
	for(int i = 0;i< 5;i++)
	{
		int min = i;
		for(int j= i+1;j<5;j++)
		{
			if(n[j] < n[min])
			{
				min = j;
			}
		}
		if(i!=min)
		{
			int aux =  n[i];
			n[i] = n[min];
			n[min] = aux;
		}
	}
}

void busquedaBinaria(int dato,int n[])
{
	int superior, 
	 	inferior, 
		mitadDelArreglo;
	bool flag = false;
	inferior = 0;
	//superior = 5;
	superior = (sizeof(n)/sizeof(n[0]));
	mitadDelArreglo =(inferior + superior)/2;
	
	while(inferior<=superior)
	{
		if(n[mitadDelArreglo] == dato)
		{
			flag = true;
			break;
		}
		if(n[mitadDelArreglo]>dato)
		{
			superior = mitadDelArreglo - 1;
		}
		if(n[mitadDelArreglo]<dato)
		{
			inferior = mitadDelArreglo + 1;
		}
		mitadDelArreglo = (inferior + superior)/2;
	}
	if(flag == true)
	{
		cout<<"Dato "<<n[mitadDelArreglo]<<" fue encontrado en la posicion "<<mitadDelArreglo<<endl;
	}
	else
	{
		cout<<"No se encontro el dato"<<endl;
	}
}

void listar(int n[])
{
	for (int i=0;i<5;i++)
	{
		cout<<n[i]<<endl;
	}
}

void insercion(int A[])
{
	int p,j;
	int aux;
	for(p=1;p<5;p++)
	{
		aux = A[p];
		j=p-1;
		while((j>=0) && (aux<A[j]))
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j+1] = aux;
	}
}




