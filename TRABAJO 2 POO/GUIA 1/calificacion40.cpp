#include <iostream>
#include <cstdlib>

using namespace std;


// El siguiente codigo sirve para encontrar la calificación más baja y la media


int main() {
    int cantidadestu, i, nota;
    int calificacion, menor, media, suma;

    suma = 0;


    cout << "\nIngresar cantidad: ";
    cin >> cantidadestu;

    i = 0;

    while (i < cantidadestu) {
        i++;
        calificacion = rand() % 21;
        cout << "\nIngresar calificacion[" << i << "]:"<<calificacion;

        suma += calificacion;
        media = suma / cantidadestu;

        if (i == 1) {
            menor = calificacion;
        }
        if (calificacion < menor) menor = calificacion;
    }

    cout << "\nLa menor calificacion es: " << menor<<endl;
    cout << "\nLa calificacion media es: " << media<<endl;

}
