#include <iostream>
#include"profesorsistemas.h"
using namespace std;

int main()
{
  ProfesorSistemas objprofe(14587, "Jarek Robles", "Medio Tiempo", 8, 30);
  cout<<"CODIGO: "<<objprofe.getCodigo()<<endl;
  cout<<"NOMBRE: "<<objprofe.getNombre()<<endl;
  cout<<"TIPO DE PROGRAMADOR: "<<objprofe.getTipo()<<endl;
  cout<<"CANTIDAD DE HORAS: "<<objprofe.getCantidad()<<endl;
  cout<<"COSTO: "<<objprofe.getCosto()<<endl;
}
