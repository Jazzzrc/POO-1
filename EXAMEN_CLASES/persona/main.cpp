#include <iostream>
#include"persona.h"
using namespace std;

int main()
{
  Persona objper("Naomi", "Romero", 17, 1.70, 65.5);
  cout<<"NOMBRE: "<<objper.getNombre()<<endl;
  cout<<"APELLIDO: "<<objper.getApellido()<<endl;
  cout<<"EDAD: "<<objper.getEdad()<<endl;
  cout<<"TALLA: "<<objper.getTalla()<<endl;
  cout<<"PESO: "<<objper.getPeso()<<endl;
  cout<<objper.Mayor()<<endl;

objper.setEdad(objper.getEdad()+5);
  cout<<"NOMBRE: "<<objper.getNombre()<<endl;
  cout<<"APELLIDO: "<<objper.getApellido()<<endl;
  cout<<"EDAD: "<<objper.getEdad()<<endl;
  cout<<"TALLA: "<<objper.getTalla()<<endl;
  cout<<"PESO: "<<objper.getPeso()<<endl;
  cout<<objper.Mayor()<<endl;
}
