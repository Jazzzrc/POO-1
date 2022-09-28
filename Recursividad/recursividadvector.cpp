#include<iostream>
using namespace std;

int dato;

void addVector(int[], int);
void listar(int[],int);
void divisores(int[], int);

int main()
{
	int vector[10],
	    indice = 0;

	addVector(vector, indice);
  listar(vector,indice);
	divisores(vector, indice);
}

void addVector(int vector[], int indice)
{
  if (indice == 10)
  {
    cout<<"\n";
  }
  else
  {
    cout<<"Ingresar dato("<<indice<<"): ";
    cin>>dato;
    vector[indice]=dato;
    addVector(vector,indice+1);
  }
}
void listar(int vector[],int indice)
{
  if (indice==10)
  {
    cout<<"\n";
  }
  else
  {
    cout<<vector[indice]<<endl;
    listar(vector,indice+1);
  }
}

void divisores(int vector[], int indice)
{
	cout<<"Divisores"<<endl;
	if(indice == 10)
	{
		cout<<"\n";
	}
	else if(vector[indice] % 7 == 0)
	{
		cout<<vector[indice]<<endl;
		divisores(vector,indice+1);
	}
}
