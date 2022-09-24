#include <iostream>
using namespace std;

string marca, rpta;
int cantidad;
float importePagar, incrementos;
int cantidadlaive, cantidadgloria, cantidadpura, cantidadtotal;
bool bandera = false;

float fimportePagar(int cantidad, string marca) {

    if (marca == "Laive" || marca == "laive") {

        return cantidad * 5.2;
    }

    else if (marca == "Gloria" || marca == "gloria") {

        return cantidad * 4.9;
    }

    if (marca == "Puravida" || marca == "puravida") {

        return cantidad * 4.5;
    }
}

void fincrementos(int cantidad, string marca, float importePagar) {

    if (marca == "Laive" || marca == "laive") {

        cantidadlaive += cantidad;
    }

    else if (marca == "Gloria" || marca == "gloria") {

        cantidadgloria += cantidad;
    }

    if (marca == "Puravida" || marca == "puravida") {

        cantidadpura += cantidad;
    }

    cantidadtotal = cantidadgloria + cantidadlaive + cantidadpura;
}
void resultados(float importePagar) {

    cout << "Importe a pagar: " << importePagar << endl;

}

void cierreCaja() {

    cout << "\n****************REPORTE FINAL*********************" << endl;
    cout << "\nCantidad de botellas Laive: " << cantidadlaive << endl;
    cout << "Cantidad de botellas gloria: " << cantidadgloria << endl;
    cout << "Cantidad de botellas pura vida: " << cantidadpura << endl;
    cout << "Cantidad total de botelals vendidas: " << cantidadtotal << endl;
    cout << "\n**************************************************" << endl;
}
int main() {

    do {
        cout<<"\t||||||||LISTA DE PRODUCTOS||||||||\n";
        cout<<"\t1. Laive"<<endl;
        cout<<"\t2. Gloria"<<endl;
        cout<<"\t3. Puravida"<<endl;
        cout<<"\t||||||||||||||||||||||||||||||||||\n";

        cout << "\nIngresa marca: ";
        cin >> marca;
        cout << "Ingrese cantidad: ";
        cin >> cantidad;
        importePagar = fimportePagar(cantidad, marca);
        fincrementos(cantidad, marca, importePagar);
        resultados(importePagar);

        cout << "\n============================";
        cout << "\nIngresar otro producto(Si/no): ";
        cin >> rpta;
        cout << "============================";

        if (rpta == "si") {
            bandera = true;
        }
        else {
            bandera = false;
        }

    } while (bandera == true);

    cierreCaja();

}