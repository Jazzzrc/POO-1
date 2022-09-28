#pragma once
#include <iostream>
#include "docente.h"
#include "tipoasistente.h"
using namespace std;

class Asistente:public Docente, public TipoAsistente
{
  private:
    int cantHoraspc;
    int numerosLaboratorios;

  public:
    Asistente(int codDoc, string nomApeDoc, string tipo, int cantidad, int numero):Docente(codDoc, nomApeDoc),TipoAsistente(tipo)
    {
      cantHoraspc = cantidad;
      numerosLaboratorios = numero;
    }

    int getCantidad()
    {
      return cantHoraspc;
    }

    int getNumero()
    {
      return numerosLaboratorios;
    }

    virtual float promedio() const
    {
      return cantHoraspc*100;
    }

};
