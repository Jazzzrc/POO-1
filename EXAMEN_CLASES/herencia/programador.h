#pragma once
#include <iostream>
using namespace std;

class Programador
{
  private:
    string Tipoprogra;

  public:
    Programador(string tipo)
    {
      Tipoprogra = tipo;
    }

    string getTipo()
    {
      return Tipoprogra;
    }
};
