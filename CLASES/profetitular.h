#pragma once
#include <iostream>
#include"profesor.h"
using namespace std;

class ProfeTitular:public Profesor
{
  private:
    int cantArticulo;

  public:
    ProfeTitular(int codigo, string nomApellido, int can):
        Profesor(codigo, nomApellido)
    {
      cantArticulo = can;
    }

    int getCanArti()
    {
      return cantArticulo;
    }
};
