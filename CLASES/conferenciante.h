#pragma once
#include <iostream>
using namespace std;

class Conferenciante
{
  private:
    string TipoCoferencia;
    string lugar;

  public:
    Conferenciante(string Tipo, string lug)
    {
      TipoCoferencia = Tipo;
      lugar = lug;
    }

    string getTipo()
    {
      return TipoCoferencia;
    }

    string getLugar()
    {
      return lugar;
    }
};
