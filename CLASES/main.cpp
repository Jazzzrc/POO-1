#include <iostream>
#include"profetitular.h"
#include"profeinterino.h"
#include"profeEmerito.h"
using namespace std;

int main()
{
  ProfeTitular objProfTitu(1, "Jarek Robles",5);

  cout<<"DATOS PROFESOR TITULAR"<<endl;
  cout<<"--------------------\n";
  cout<<"CODIGO: "<<objProfTitu.getCodigo()<<endl;
  cout<<"NOMBRE Y APELLIDO: "<<objProfTitu.getNomApe()<<endl;
  cout<<"ARTICULOS CIENTIFICOS: "<<objProfTitu.getCanArti()<<endl;

  ProfeInterino objProfInte(1, "Piero Castillo", 30);
  cout<<"\nDATOS PROFESOR INTERINO"<<endl;
  cout<<"--------------------\n";
  cout<<"CODIGO: "<<objProfInte.getCodigo()<<endl;
  cout<<"NOMBRE Y APELLIDO: "<<objProfInte.getNomApe()<<endl;
  cout<<"HORAS DE ASESORIA: "<<objProfInte.getHorasA()<<endl;

  ProfeEmerito objProfEme(1, "Naomi Romero", "Motivacional", "Auditorio Principal", 2);
  cout<<"\nDATOS PROFESOR EMERITO"<<endl;
  cout<<"--------------------\n";
  cout<<"CODIGO: "<<objProfEme.getCodigo()<<endl;
  cout<<"NOMBRE Y APELLIDO: "<<objProfEme.getNomApe()<<endl;
  cout<<"TIPO DE CONFERENCIA: "<<objProfEme.getTipo()<<endl;
  cout<<"LUGAR: "<<objProfEme.getLugar()<<endl;
  cout<<"DURACION: "<<objProfEme.getTiempo()<<endl;

}
