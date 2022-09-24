#include <iostream>
#include <math.h>
using namespace std;
 
int main() {

     float precio; 
     int cantidad;
     float impnodsct;
     float descuento;
     float primdsct;
     float precio1;
     float segdsct;
     float precio2;
     float total;


     cout<<"Precio:S/. ";
     cin>>precio;
     cout<<"Cantidad: ";
     cin>>cantidad;

     impnodsct = precio * cantidad;
     primdsct = 0.10 * impnodsct;
     precio1 = impnodsct - primdsct;
     segdsct = 0.10 * precio1;
     descuento = primdsct + segdsct;
     total = impnodsct-descuento;

     cout<<"\nImporte de compra:S/. "<<impnodsct;
     cout<<"\nDescuento total:S/. "<<descuento;
     cout<<"\nImporte a pagar:S/. "<<total;
    
return 0;
 }
