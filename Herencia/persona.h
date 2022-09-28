#pragma once
#include <iostream>
using namespace std;

class Persona
{
  private:
      int codPer;
      string nomApe;

  public:
      Persona(int cod, string nomA)
      {
        codPer = cod;
        nomApe = nomA;
      }

      int getCodigo()
      {
        return codPer;
      }
      string getNomApe()
      {
        return nomApe;
      }

      //metodos virtuales
      virtual float promedio() const = 0;
      virtual void imprimirReporte() const = 0;
};
