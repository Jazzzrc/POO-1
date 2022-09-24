#include <iostream>
#include <math.h>
using namespace std;

int main() {

     float preciomentor;
     int cantidad;
     float descuento;
     float impnodsct;
     float real;
     float transporte;
     float imporpagar;

     cout<<"Precio por docena:S/. ";
     cin>>preciomentor;
     cout<<"Cantidad: ";
     cin>>cantidad;
     cout<<"Precio de transporte:S/. ";
     cin>>transporte;

     impnodsct = preciomentor * cantidad;
     descuento = impnodsct * 0.12;
     real = impnodsct - descuento;
     imporpagar = real + transporte;

     cout<<"\nImporte de compra:S/. "<<impnodsct; 
     cout<<"\nDescuento:S/. "<<descuento;
     cout<<"\nImporte con descuento:S/. "<<real;
     cout<<"\nImporte a pagar:S/. "<<imporpagar;
return 0;
}