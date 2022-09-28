#pragma once
#include <iostream>
using namespace std;

class TipoAsistente
{
  private:
    string Tipoasistente;
  public:
    TipoAsistente(string tipo)
    {
      Tipoasistente = tipo;
    }

    string getTipoAsistente()
    {
      return Tipoasistente;
    }
};
