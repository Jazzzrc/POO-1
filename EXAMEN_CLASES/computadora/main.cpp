#include <iostream>
#include "computadora.h"
using namespace std;

int main()
{
  int cod;
  string mar;
  string col;
  float precio;

  cout<<"CODIGO: ";
  cin>>cod;
  cout<<"MARCA: ";
  cin>>mar;
  cout<<"COLOR: ";
  cin>>col;
  cout<<"PRECIO: $";
  cin>>precio;
  Computadora objcompu(cod, mar, col, precio);

  cout<<"\n";
  cout<<"CODIGO-"<<objcompu.getCodigo()<<endl;
  cout<<"MARCA-"<<objcompu.getMarca()<<endl;
  cout<<"COLOR-"<<objcompu.getColor()<<endl;
  cout<<"PRECIO-$"<<objcompu.getPrecio()<<endl;
  cout<<"PRECIO SOLES-S/."<<objcompu.getPrecioSoles()<<endl;
  cout<<"PRECIO EUROS-E/."<<objcompu.getPrecioEuros()<<endl;

  objcompu.setPrecio(objcompu.getPrecio() - (objcompu.getPrecio()*0.10));
  cout<<"\n";
  cout<<"****VALORES ACTUALIZADOs****"<<endl;
  cout<<"CODIGO-"<<objcompu.getCodigo()<<endl;
  cout<<"MARCA-"<<objcompu.getMarca()<<endl;
  cout<<"COLOR-"<<objcompu.getColor()<<endl;
  cout<<"PRECIO-$"<<objcompu.getPrecio()<<endl;
  cout<<"PRECIO SOLES-S/."<<objcompu.getPrecioSoles()<<endl;
  cout<<"PRECIO EUROS-E/."<<objcompu.getPrecioEuros()<<endl;

}
