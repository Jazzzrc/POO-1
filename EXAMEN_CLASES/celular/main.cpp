#include <iostream>
#include "celular.h"
using namespace std;

int main()
{
  Celular objcelular(998735148, "Jarek Robles", 900, 0.70);
  cout<<"NUMERO: "<<objcelular.getNumero()<<endl;
  cout<<"USUARIO: "<<objcelular.getUsuario()<<endl;
  cout<<"SEGUNDOS CONSUMIDOS: "<<objcelular.getSegConsumidos()<<endl;
  cout<<"PRECIO POR SEGUNDO: "<<objcelular.getPrecio()<<endl;
  cout<<"COSTO DE CONSUMO: "<<objcelular.getCosto()<<endl;
  cout<<"IGV: "<<objcelular.getIgv()<<endl;
  cout<<"TOTAL A PAGAR: "<<objcelular.getTotal()<<endl;

  objcelular.setSegConsumidos(objcelular.getSegConsumidos() + 20);
  objcelular.setPrecio(objcelular.getPrecio() - (objcelular.getPrecio() * 0.5));
  cout<<"\n";
  cout<<"****VALORES ACTUALIZADOs****"<<endl;
  cout<<"NUMERO: "<<objcelular.getNumero()<<endl;
  cout<<"USUARIO: "<<objcelular.getUsuario()<<endl;
  cout<<"SEGUNDOS CONSUMIDOS: "<<objcelular.getSegConsumidos()<<endl;
  cout<<"PRECIO POR SEGUNDO: "<<objcelular.getPrecio()<<endl;
  cout<<"COSTO DE CONSUMO: "<<objcelular.getCosto()<<endl;
  cout<<"IGV: "<<objcelular.getIgv()<<endl;
  cout<<"TOTAL A PAGAR: "<<objcelular.getTotal()<<endl;
}
