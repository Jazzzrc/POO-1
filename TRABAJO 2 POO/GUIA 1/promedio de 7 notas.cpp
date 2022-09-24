#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int nota, cantidad;
    float suma=0, promedio;
    int i;

    cout << "Ingresar cantidad de notas: ";
    cin >> cantidad;
    cout << "\n*******************************";

    for (i = 1; i <= cantidad; i++)
    {
        cout << "\nIngresar nota: ";
        cin >> nota;

        suma+= nota;

        promedio = suma / cantidad;

    }
    cout << "\n*********************************";
    cout << "\nPromedio ponderado: "<<promedio;
    cout << "\n*********************************";
}