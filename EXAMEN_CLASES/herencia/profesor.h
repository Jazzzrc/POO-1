#pragma once
#include <iostream>
using namespace std;

class Profesor
{
  private:
    int codigo;
    string nomApe;

  public:
    Profesor(int cod, string nombre)
    {
      codigo = cod;
      nomApe = nombre;
    }

    int getCodigo()
    {
      return codigo;
    }

    string getNombre()
    {
      return nomApe;
    }
};
