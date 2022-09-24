#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int laive;
    int gloria;
    int puravida;
    int milkito;
    float precio;
    float impagar;
    float descuento;
    int cantidad;

    cout<<" Cantidad de Laive: ";
    cin>>laive;
    cout<<"Cantidad de Gloria: ";
    cin>>gloria;
    cout<<"Cantidad de Pura vida: ";
    cin>>puravida;
    cout<<"Cantidad de Milkito: ";
    cin>>milkito;

    precio = (laive * 3.90) + (gloria * 3.80) + (puravida * 4.20) + (milkito * 3.60);
    cantidad = laive + gloria + milkito + puravida;
    
    cout<<"\nImporte de compra:S/. "<<precio;
    cout<<"\nCantidad de botellas: "<<cantidad;
    

    if (cantidad < 15){
         descuento = 0.04 * precio;
         impagar = precio - descuento;

         cout<<"\nImporte de descuento:S/."<<descuento;
         cout<<"\nImporte total:S/."<<impagar;
    }

    if (cantidad >= 15 && cantidad < 30){
         descuento = 0.065 * precio;
         impagar = precio - descuento;

         cout<<"\nImporte de descuento:S/."<<descuento;
         cout<<"\nImporte total:S/."<<impagar;
    }

    if (cantidad >= 30 && cantidad < 45){
         descuento = 0.09 * precio;
         impagar = precio - descuento;

         cout<<"\nImporte de descuento:S/."<<descuento;
         cout<<"\nImporte total:S/."<<impagar;
    }
    if (cantidad >= 45){
         descuento = 0.115 * precio;
         impagar = precio - descuento;

         cout<<"\nImporte de descuento:S/."<<descuento;
         cout<<"\nImporte total:S/."<<impagar;
    }


return 0;
}

