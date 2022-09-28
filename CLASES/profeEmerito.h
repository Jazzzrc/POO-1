#pragma once
#include <iostream>
#include"profesor.h"
#include"conferenciante.h"
using namespace std;

class ProfeEmerito:public Profesor,public Conferenciante
{
  private:
    int tiempoServicio;

  public:
    ProfeEmerito(int cod,string nomApe, string Tipo, string lugar, int tiempo):
    Profesor(cod,nomApe),Conferenciante(Tipo, lugar)
    {
      tiempoServicio = tiempo;
    }

    int getTiempo()
    {
      return tiempoServicio;
    }
};
