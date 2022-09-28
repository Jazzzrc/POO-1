#include <iostream>
#include "trabajador.h"
using namespace std;

int main()
{
  Trabajador objtrabajador(1456, "Paulo Dybala", 40, 20);
  cout<<"CODIGO: "<<objtrabajador.getCodigo()<<endl;
  cout<<"NOMBRE: "<<objtrabajador.getNombre()<<endl;
  cout<<"HORAS TRABAJADAS: "<<objtrabajador.getHoras()<<endl;
  cout<<"TARIFA POR HORA: "<<objtrabajador.getTarifa()<<endl;
  cout<<"SUELDO BRUTO: "<<objtrabajador.getSueldoBru()<<endl;
  cout<<"DESCUENTO: "<<objtrabajador.getDescuento()<<endl;
  cout<<"SUELDO NETO: "<<objtrabajador.getSueldoNet()<<endl;

  objtrabajador.setHoras(objtrabajador.getHoras() + 10);
  cout<<"\n";
  cout<<"DATOS ACTUALIZADOS"<<endl;
  cout<<"CODIGO: "<<objtrabajador.getCodigo()<<endl;
  cout<<"NOMBRE: "<<objtrabajador.getNombre()<<endl;
  cout<<"HORAS TRABAJADAS: "<<objtrabajador.getHoras()<<endl;
  cout<<"TARIFA POR HORA: "<<objtrabajador.getTarifa()<<endl;
  cout<<"SUELDO BRUTO: "<<objtrabajador.getSueldoBru()<<endl;
  cout<<"DESCUENTO: "<<objtrabajador.getDescuento()<<endl;
  cout<<"SUELDO NETO: "<<objtrabajador.getSueldoNet()<<endl;
}
