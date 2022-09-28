#pragma once
#include <iostream>
using namespace std;

class Docente
{
  private:
    int codDoc;
    string nomApeDoc;

  public:
    Docente(int cod, string nomApe)
    {
      codDoc = cod;
      nomApeDoc = nomApe;
    }

    int getCodigo()
    {
      return codDoc;
    }

    string getNomApe()
    {
      return nomApeDoc;
    }

    virtual float promedio() const = 0;
};
