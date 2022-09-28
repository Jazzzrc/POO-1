#pragma once
#include <iostream>
#include"profesor.h"
#include"programador.h"
using namespace std;

class ProfesorSistemas:public Profesor, public Programador
{
  private:
    int cantHoras;
    float costo;
  public:
    ProfesorSistemas(int codigo, string nomApe, string tipo, int cantidad, float cos):Profesor(codigo, nomApe),Programador(tipo)
    {
      cantHoras = cantidad;
      costo = cos;
    }

    int getCantidad()
    {
      return cantHoras;
    }

    float getCosto()
    {
      return costo;
    }

};
