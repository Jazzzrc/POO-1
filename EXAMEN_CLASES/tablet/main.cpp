#include<iostream>
#include "tablet.h"
using namespace std;

int main()
{
  int cod;
  string mar;
  string color;
  float precio;

  cout<<"INGRESE CODIGO: ";
  cin>>cod;
  cout<<"MARCA: ";
  cin>>mar;
  cout<<"COLOR: ";
  cin>>color;
  cout<<"PRECIO: ";
  cin>>precio;
  Tablet tablet(cod, mar, color, precio);

  cout<<"\nINGRESE CODIGO: ";
  cin>>cod;
  cout<<"MARCA: ";
  cin>>mar;
  cout<<"COLOR: ";
  cin>>color;
  cout<<"PRECIO: ";
  cin>>precio;
  Tablet tablet2(cod, mar, color, precio);

  cout<<endl;
  cout<<"CODIGO: "<<tablet.getCodigo()<<endl;
  cout<<"MARCA: "<<tablet.getMarca()<<endl;
  cout<<"COLOR: "<<tablet.getColor()<<endl;
  cout<<"PRECIO: "<<tablet.getPrecio()<<endl;

  cout<<endl;
  cout<<"CODIGO: "<<tablet2.getCodigo()<<endl;
  cout<<"MARCA: "<<tablet2.getMarca()<<endl;
  cout<<"COLOR: "<<tablet2.getColor()<<endl;
  cout<<"PRECIO: "<<tablet2.getPrecio()<<endl;

  tablet2.setPrecio(tablet2.getPrecio() - (tablet2.getPrecio()*0.10));
  cout<<"PRECIO ACTUALIZADO: "<<tablet2.getPrecio()<<endl;
}
