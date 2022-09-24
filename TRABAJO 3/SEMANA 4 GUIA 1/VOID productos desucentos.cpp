//Una tienda vende tres tipos de productos a los precios dados en la siguiente tabla://
// p1=15    p2=17.5    p3=20//

//Como oferta, si el cliente adquiere más de 10 unidades del producto, la tienda aplica 
//un descuento del 15% del importe compra; en caso contrario, sólo descuenta el 7% 
///del importe compra. 
 
//Dados  el  precio  del  producto  y  la  cantidad  de  unidades  adquiridas,  diseñe  un 
//programa  que  determine  el  importe  de  la  compra,  el  importe  del  descuento  y  el 
//importe a pagar. 
 
//Considere todas las variables como globales y use métodos tipo void.

#include <iostream>
using namespace std;

int cantidadP1, cantidadP2, cantidadP3, itemP1, itemP2, itemP3;
float totalP1, totalP2, totalP3;
string producto, rpta;
int cantidad;
float importeCompra, importeDescuento, importePagar;
bool bandera = false;

float fImporteCompra(string producto, int cantidad) {

    if (producto == "p1" || producto == "P1") {
        return 15 * cantidad;
    }

    else if (producto == "p2" || producto == "P2") {
        return 17.5 * cantidad;
    }

    else if (producto == "p3" || producto == "P3") {
        return 20 * cantidad;
    }
    else {
        cout << "Ingrese solo: p1-p2-p3";

    }
}

float fImporteDescuento(int cantidad, float importeCompra) {
    if (cantidad > 10) {
        return 0.15 * importeCompra;
    }
    else {
        return 0.07 * importeCompra;
    }
}

float fImportePagar(float importeCompra, float importeDescuento) {
    return importeCompra - importeDescuento;
}

void imprimirResultados(float importeCompra, float importeDescuento, float importePagar) {
    cout << "\nImporte de compra: S/." << importeCompra<<endl;
    cout << "Importe de descuento: S/." << importeDescuento << endl;
    cout << "Importe a pagar: S/." << importePagar << endl;
}

void incrementos(string producto, int cantidad, float importePagar) {
    if (producto == "p1" || producto == "P1") {
        cantidadP1 += cantidad;
        totalP1 += importePagar;
        itemP1++;
    }
    if (producto == "p2" || producto == "P2") {
        cantidadP2 += cantidad;
        totalP2 += importePagar;
        itemP2++;
    }
    if (producto == "p3" || producto == "P3") {
        cantidadP3 += cantidad;
        totalP3 += importePagar;
        itemP3++;
    }
}

void cierreCaja() {
    cout << "REPORTE CIERRE DE CAJA\n";
    cout << "*********************************\n";
    cout << "ItemP1: " << itemP1 << endl;
    cout << "ItemP2: " << itemP2 << endl;
    cout << "ItemP3: " << itemP3 << endl;
    cout << "Cantidad total de P1:" << cantidadP1 << endl;
    cout << "Cantidad total de P2:" << cantidadP2 << endl;
    cout << "Cantidad total de P3:" << cantidadP3 << endl;
    cout << "Importe Total de P1:" << totalP1 << endl;
    cout << "Importe Total de P2:" << totalP2 << endl;
    cout << "Importe Total de P3:" << totalP3 << endl;

    cout << "*************************************\n";

}



int main() {

    

    do {
        cout << "Ingresar codigo de producto: ";
        cin >> producto,
        cout << "Ingresar cantidad: ";
        cin >> cantidad;
        cout << "\n********************************************\n";

        importeCompra = fImporteCompra(producto, cantidad);
        importeDescuento = fImporteDescuento(cantidad, importeCompra);
        importePagar = fImportePagar(importeCompra, importeDescuento);
        imprimirResultados(importeCompra, importeDescuento, importePagar);
        incrementos(producto, cantidad, importePagar);

        cout << "\nDesea ingresar otro producto: ";
        cin >> rpta;
        cout <<"\n=================================================="<< endl;

        if (rpta == "si") {
            bandera = true;

        }
        else {
            bandera = false;
        }
    } while (bandera == true);

    cierreCaja();

}

/*========================================================== LOCALES ===============================================================
====================================================================================================================================
====================================================================================================================================
====================================================================================================================================
====================================================================================================================================
==================================================================================================================================*/


#include <iostream>
using namespace std;

int cantidadP1, cantidadP2, cantidadP3, itemP1, itemP2, itemP3;

float totalP1, totalP2, totalP3;

float fImporteCompra(string producto, int cantidad) {

    if (producto == "p1" || producto == "P1") {
        return 15 * cantidad;
    }

    else if (producto == "p2" || producto == "P2") {
        return 17.5 * cantidad;
    }

    else if (producto == "p3" || producto == "P3") {
        return 20 * cantidad;
    }
    else {
        cout << "Ingrese solo: p1-p2-p3";

    }
}

float fImporteDescuento(int cantidad, float importeCompra) {
    if (cantidad > 10) {
        return 0.15 * importeCompra;
    }
    else {
        return 0.07 * importeCompra;
    }
}

float fImportePagar(float importeCompra, float importeDescuento) {
    return importeCompra - importeDescuento;
}

void imprimirResultados(float importeCompra, float importeDescuento, float importePagar) {
    cout << "\nImporte de compra: S/." << importeCompra<<endl;
    cout << "Importe de descuento: S/." << importeDescuento << endl;
    cout << "Importe a pagar: S/." << importePagar << endl;
}

void incrementos(string producto, int cantidad, float importePagar) {
    if (producto == "p1" || producto == "P1") {
        cantidadP1 += cantidad;
        totalP1 += importePagar;
        itemP1++;
    }
    if (producto == "p2" || producto == "P2") {
        cantidadP2 += cantidad;
        totalP2 += importePagar;
        itemP2++;
    }
    if (producto == "p3" || producto == "P3") {
        cantidadP3 += cantidad;
        totalP3 += importePagar;
        itemP3++;
    }
}

void cierreCaja() {
    cout << "REPORTE CIERRE DE CAJA\n";
    cout << "*********************************\n";
    cout << "ItemP1: " << itemP1 << endl;
    cout << "ItemP2: " << itemP2 << endl;
    cout << "ItemP3: " << itemP3 << endl;
    cout << "Cantidad total de P1:" << cantidadP1 << endl;
    cout << "Cantidad total de P2:" << cantidadP2 << endl;
    cout << "Cantidad total de P3:" << cantidadP3 << endl;
    cout << "Importe Total de P1:" << totalP1 << endl;
    cout << "Importe Total de P2:" << totalP2 << endl;
    cout << "Importe Total de P3:" << totalP3 << endl;

    cout << "*************************************\n";

}



int main() {

    string producto, rpta;
    int cantidad;
    float importeCompra, importeDescuento, importePagar;
    bool bandera = false;

    do {
        cout << "Ingresar codigo de producto: ";
        cin >> producto,
        cout << "Ingresar cantidad: ";
        cin >> cantidad;
        cout << "\n********************************************\n";

        importeCompra = fImporteCompra(producto, cantidad);
        importeDescuento = fImporteDescuento(cantidad, importeCompra);
        importePagar = fImportePagar(importeCompra, importeDescuento);
        imprimirResultados(importeCompra, importeDescuento, importePagar);
        incrementos(producto, cantidad, importePagar);

        cout << "\nDesea ingresar otro producto: ";
        cin >> rpta;
        cout <<"\n=================================================="<< endl;

        if (rpta == "si") {
            bandera = true;

        }
        else {
            bandera = false;
        }
    } while (bandera == true);

    cierreCaja();

}
