#include <iostream>
#include <math.h>
using namespace std;

int main() {

      float precio;
      int cantidad;
      float impnodsct;
      float descuento;
      float total;

      cout<<"Precio:S/.";
      cin>>precio;
      cout<<"Cantidad: ";
      cin>>cantidad;

      impnodsct = precio * cantidad;
      descuento = impnodsct*0.15;
      total = impnodsct - descuento;

      cout<<"\nImporte de la compra:S/."<<impnodsct;
      cout<<"\nDescuento del 15%: S/."<<descuento;
      cout<<"\nImporte total:S/."<<total;

return 0;
}
