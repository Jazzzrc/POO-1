#include <iostream>
using namespace std;

string moneda, rpta;
float cantidad;
float cantidadSoles, cantidadDolares, cantidadMarcos;
int itemso, itemdol, itemMar;
bool bandera = false;

void incrementos(float cantidad, string moneda) {

    if (moneda == "soles" || moneda == "SOLES" || moneda == "Soles") {

        cantidadSoles += cantidad;
        itemso++;
    }

    else if (moneda == "dolares" || moneda == "DOLARES" || moneda == "Dolares") {

        cantidadDolares += cantidad;
        itemdol++;
    }

    else if (moneda == "marcos" || moneda == "MARCOS" || moneda == "Marcos") {

        cantidadMarcos += cantidad;
        itemMar++;
    }
}

void resultadoSoles() {

    cout << "\t*********Donaciones en soles************\n";
    cout << "\t| Cantida recaudada: " << cantidadSoles << endl;
    cout << "\t| Cantidad de personas: " << itemso << endl;

    cout << "\t*********Donaciones en dolares************\n";
    cout << "\t| Cantida recaudada: " << cantidadDolares << endl;
    cout << "\t| Cantidad de personas: " << itemdol << endl;

    cout << "\t*********Donaciones en marcos************\n";
    cout << "\t| Cantida recaudada: " << cantidadMarcos << endl;
    cout << "\t|Cantidad de personas: " << itemMar << endl;

}

int main() {


    cout << "\t|*****LISTA DE MONEDAS****|\n";
    cout << "\t|          SOLES          |" << endl;
    cout << "\t|         DOLARES         |" << endl;
    cout << "\t|         MARCOS          |" << endl;
    cout << "\t|*************************|\n" << endl;
    do {

        cout << "\nTipo de moneda: ";
        cin >> moneda;
        cout << "Cantidad de donación: ";
        cin >> cantidad;
        system("cls");

        cout << "Moneda donada: " << moneda;
        cout << "\nCantidad donada: " << cantidad;

        incrementos(cantidad, moneda);

        cout << "\n""\t============================\n";
        cout << "\tIngresar otra donacion: ";
        cin >> rpta;
        cout << "\t============================\n" << endl;

        if (rpta == "si") {
            bandera = true;
        }
        else {
            bandera = false;
        }
    } while (bandera == true);

    cout << endl;
    resultadoSoles();

}
