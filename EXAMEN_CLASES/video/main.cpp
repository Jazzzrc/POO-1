#include <iostream>
#include "video.h"
using namespace std;

int main()
{
  Video objvide(145896, "CUMPLEANOS", 2.30, 150.50, 3.76);
  cout<<"CODIGO: "<<objvide.getCodigo()<<endl;
  cout<<"NOMBRE: "<<objvide.getNombre()<<endl;
  cout<<"DURACION: "<<objvide.getDuracion()<<endl;
  cout<<"PRECIO: "<<objvide.getPrecio()<<endl;
  cout<<"TIPO DE CAMBIO: "<<objvide.getTipo()<<endl;
  cout<<"PRECIO DOLARES: "<<objvide.getPrecioDolares()<<endl;

  objvide.setPrecio(objvide.getPrecio()+5.50);
  cout<<"\n";
  cout<<"****VALORES ACTUALIZADOS****"<<endl;
  cout<<"CODIGO: "<<objvide.getCodigo()<<endl;
  cout<<"NOMBRE: "<<objvide.getNombre()<<endl;
  cout<<"DURACION: "<<objvide.getDuracion()<<endl;
  cout<<"PRECIO: "<<objvide.getPrecio()<<endl;
  cout<<"TIPO DE CAMBIO: "<<objvide.getTipo()<<endl;
  cout<<"PRECIO DOLARES: "<<objvide.getPrecioDolares()<<endl;

}
