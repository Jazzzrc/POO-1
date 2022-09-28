#include <iostream>
#include"parcial.h"
#include"estable.h"
#include"asistente.h"
using namespace std;

int main(){

  Parcial objParcial(16, "Jarek Robles", 15, 500);
  cout<<"CODIGO: "<<objParcial.getCodigo()<<endl;
  cout<<"NOMBRE Y APELLIDOS: "<<objParcial.getNomApe()<<endl;
  cout<<"CANTIDAD: "<<objParcial.getCanHoras()<<endl;
  cout<<"COSTO: "<<objParcial.getCosto()<<endl;

  cout<<endl;
  Estable objEstable(60, "Naomi Ronceros", 5, 400);
  cout<<"CODIGO: "<<objEstable.getCodigo()<<endl;
  cout<<"NOMBRE Y APELLIDOS: "<<objEstable.getNomApe()<<endl;
  cout<<"CANTIDAD CERTIFICACIONES: "<<objEstable.getCerti()<<endl;
  cout<<"BONO: "<<objEstable.getBono()<<endl;

  cout<<endl;
  Asistente objAsistente(1, "Pablo Rojas", "Tiempo Completo", 100, 5);
  cout<<"CODIGO: "<<objAsistente.getCodigo()<<endl;
  cout<<"NOMBRE Y APELLIDOS: "<<objAsistente.getNomApe()<<endl;
  cout<<"TIPO DE ASISTENTE: "<<objAsistente.getTipoAsistente()<<endl;
  cout<<"CANTIDAD: "<<objAsistente.getCantidad()<<endl;
  cout<<"NUMERO LABO.: "<<objAsistente.getNumero()<<endl;

}
