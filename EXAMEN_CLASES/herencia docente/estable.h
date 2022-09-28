#pragma once
#include <iostream>
#include "docente.h"
using namespace std;

class Estable:public Docente
{
  private:
    int cantCertificaciones;
    float bono;

  public:
    Estable(int codDoc, string nomApeDoc, int cantCerti, float bono):Docente(codDoc, nomApeDoc)
    {
      cantCertificaciones = cantCerti;
      this->bono = bono;
    }

    int getCerti()
    {
      return cantCertificaciones;
    }

    float getBono()
    {
      return bono;
    }

    virtual float promedio() const
    {
      return bono + 15;
    }

};
