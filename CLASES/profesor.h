#pragma once
#include <iostream>
using namespace std;

class Profesor
{
  private:
    int codPro;
    string nomApe;

  public:
    Profesor(int cod, string nomA)
    {
      codPro = cod;
      nomApe = nomA;
    }

    int getCodigo()
    {
      return codPro;
    }

    string getNomApe()
    {
      return nomApe;
    }
};
