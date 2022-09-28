#include<iostream>
using namespace std;

int numero[10];
int indice = 0;
int valor;

void llenaVector(int numero[], int indice);
void listarVector(int);
int main()
{
    cout << "INGRESO DE DATOS AL VECTOR\n";
    llenaVector(numero,indice);
    int nuevoContador = 0;
    cout << "LISTAR TODOS LOS ELEMENTOS\n";
    listarVector(nuevoContador);
}
void llenaVector(int numero[], int indice)
{
    if (indice == 10)
    {
        cout << "\n";
    }
    else{
        cout << "Ingrese elemento["<<indice<<"]:";
        cin >> valor;
        numero[indice] = valor;
        //indice++;
        llenaVector(numero, indice+1);
    }
}
void listarVector(int pos)
{
    if (pos == 10) {
        cout << "\n";
    }
    else{
        cout << numero[pos] << endl;
        listarVector(pos + 1);
    }
}

int maximoDelVector(int max, int pos)
{
if (pos == 10)
{
    return max;
}
else {
    if (max < numero[pos])
    {
        max = numero[pos];
    }
    return maximoDelVector(max, pos + 1);
    }
}
