#include <iostream>
using namespace std;

string codigo, rpta;
float importePagar, totalp1, totalp2, totalp3;
int cantidad, cantp1, cantp2, cantp3, itemp1, itemp2, itemp3;
bool bandera = false;

float fimportePagar(string codigo, int cantidad) {
    if (codigo == "P1" || codigo == "p1") {
        return cantidad * 15.0;
    }

    else if (codigo == "P2" || codigo == "p2") {
        return cantidad * 17.5;
    }

    else if (codigo == "P3" || codigo == "p3") {
        return cantidad * 20.0;
    }
}

void fincrementos(int cantidad, string codigo, float importePagar) {
    if (codigo == "P1" || codigo == "p1") {
        cantp1 += cantidad;
        totalp1 += importePagar;
        itemp1++;
    }

    else if (codigo == "P2" || codigo == "p2") {
        cantp2 += cantidad;
        totalp2 += importePagar;
        itemp2++;
    }

    else if (codigo == "P3" || codigo == "p3") {
        cantp3 += cantidad;
        totalp3 += importePagar;
        itemp3++;
    }
}

void resultados(float importePagar) {
    cout << "\nImporte pagar: " << importePagar << endl;
}

void cierreCaja() {
    cout << "\t**********************************\n";
    cout << "\t******REPORTE CIERRE DE CAJA******\n";
    cout << "\t**********************************\n";
    cout << "\tItemP1: " << itemp1 << endl;
    cout << "\tItemP2: " << itemp2 << endl;
    cout << "\tItemP3: " << itemp3 << endl;
    cout << "\tCantidad total de P1:" << cantp1 << endl;
    cout << "\tCantidad total de P2:" << cantp2 << endl;
    cout << "\tCantidad total de P3:" << cantp3 << endl;
    cout << "\tImporte Total de P1:" << totalp1 << endl;
    cout << "\tImporte Total de P2:" << totalp2 << endl;
    cout << "\tImporte Total de P3:" << totalp3 << endl;
}



int main() {

    cout << "\t******LISTA DE PRODUCTOS*****\n";
    cout << "\tPRODUCTO 1(p1) : S/.15.0" << endl;
    cout << "\tPRODUCTO 2(p2) : S/.17.5" << endl;
    cout << "\tPRODUCTO 3(p3) : S/.20.0" << endl;
    cout << "\t*****************************\n" << endl;

    do {

        cout << "Ingresar codigo: ";
        cin >> codigo;
        cout << "Ingresar cantidad: ";
        cin >> cantidad;
        importePagar = fimportePagar(codigo, cantidad);
        fincrementos(cantidad, codigo, importePagar);
        resultados(importePagar);

        cout << "\n""\t============================\n";
        cout << "\tIngresar otro producto: ";
        cin >> rpta;
        cout << "\t============================\n" << endl;

        if (rpta == "si") {
            bandera = true;
        }
        else {
            bandera = false;
        }
    } while (bandera == true);

    cierreCaja();


}
