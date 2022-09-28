#pragma once
#include <iostream>
#include"persona.h"
#include"practicante.h"
class Alumno:public Persona,public Practicante
{
	private:
		float pc1;
		float pc2;
	public:
		Alumno(int cod,string nomA,int cantidadPracticante,float pc1,float pc2)
		:Persona(cod,nomA),Practicante(cantidadPracticante)
		{
			this->pc1 = pc1;
			this->pc2 = pc2;
		}
		float getN1()
		{
			return pc1;
		}

		float getN2()
		{
			return pc2;
		}

    virtual float promedio() const 
    {
      return (pc1 + pc2)/2;
    }
    virtual void imprimirReporte() const
    {
      std::cout<<"****REPORTE DEL ALUMNO****"<<endl;
    }
};
