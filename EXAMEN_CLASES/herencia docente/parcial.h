#pragma once
#include <iostream>
#include "docente.h"
using namespace std;

class Parcial:public Docente
{
  private:
    int cantHoras;
    float costo;

  public:
    Parcial(int codDoc, string nomApeDoc, int can, float cost):Docente(codDoc, nomApeDoc)
    {
      cantHoras = can;
      costo = cost;
    }

    int getCanHoras()
    {
      return cantHoras;
    }

    float getCosto()
    {
      return costo;
    }

    virtual float promedio() const
    {
      return cantHoras*0.60 + costo*0.40;
    }


};
