#pragma once
#include <iostream>
#include"profesor.h"
using namespace std;

class ProfeInterino:public Profesor
{
  private:
    int HorasAsesoria;

  public:
    ProfeInterino(int codigo, string nomA, int HorasA):Profesor(codigo,nomA)
    {
      HorasAsesoria = HorasA;
    }

    int getHorasA()
    {
      return HorasAsesoria;
    }
};
