#include<iostream>
using namespace std;

int dato;

void addVector(int[], int);
int main()
{
    int vector[10],
        indice = 0;
    addVector(vector, indice);
}
void addVector(int vector[], int indice)
{
    if(indice == 10)  
    {
        cout << "\n";
    }
    else
    {
        cout << "Ingresar elemento("<<indice<<"):";
        cin >> dato;
        vector[indice] = dato;

        addVector(vector,indice+1);
    }
}


void listar(int vector[], int indice)
{
    if(indice == 10)
    {
        cout << "\n";
    }
    else
    {
        cout << vector[indice]<<endl;
        listar(vector,indice+1);
    }
}

void impar(int vector[], int posicion)
{
    if(posicion == 10)
    {
        cout << "\n";
    }
    else
    {
        if(vector[posicion] % 2 != 0) 
        {
            return vector[posicion];  
        }
        impar(vector[], posicion + 1) 
    }
}
