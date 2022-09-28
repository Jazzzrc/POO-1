#include <iostream>
#include "edificio.h"
using namespace std;

int main()
{
  int cod;
  int cant;
  float pre;
  string dire;

  cout<<"CODIGO: ";
  cin>>cod;
  cout<<"CANTIDAD DE HABITACIONES: ";
  cin>>cant;
  cout<<"PRECIO: S/.";
  cin>>pre;
  cout<<"DIRECCION: ";
  cin>>dire;

  Edificio objedi(cod, cant, pre, dire);
  cout<<endl;
  cout<<"CODIGO........................."<<objedi.getCodigo()<<endl;
  cout<<"CANTIDAD DE HABITACIONES......."<<objedi.getCantidad()<<endl;
  cout<<"PRECIO.........................S/."<<objedi.getPrecio()<<endl;
  cout<<"DIRECCION......................"<<objedi.getDireccion()<<endl;
  cout<<"PRECIO DEL EDIFICIO............S/."<<objedi.getEdificio()<<endl;

  objedi.setPrecio(objedi.getPrecio() + (objedi.getPrecio()*0.20));
  cout<<"\n";
  cout<<"****VALORES ACTUALIZADOS****"<<endl;
  cout<<"CODIGO........................."<<objedi.getCodigo()<<endl;
  cout<<"CANTIDAD DE HABITACIONES......."<<objedi.getCantidad()<<endl;
  cout<<"PRECIO.........................S/."<<objedi.getPrecio()<<endl;
  cout<<"DIRECCION......................"<<objedi.getDireccion()<<endl;
  cout<<"PRECIO DEL EDIFICIO............S/."<<objedi.getEdificio()<<endl;

}
