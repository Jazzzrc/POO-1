#pragma once
#include"persona.h"
class Profesor:public Persona
{
	private:
		int 	canHoras;
		float	costoHora;
    float criterioA,
          criterioB,
          criterioC;
	public:
		Profesor(int codigo,string nomApellidos,int can,float costo,float cA, float cB,float cC):
				Persona(codigo,nomApellidos)
		{
			canHoras = can;
			costoHora = costo;
      criterioA = cA;
      criterioB = cB;
      criterioC = cC;
		}

		int getCanHoras()
		{
			return canHoras;
		}

		int getCostoHora()
		{
			return costoHora;
		}
		float getSueldo()
		{
			return canHoras * costoHora;
		}

    float getCriterioA()
    {
      return criterioA;
    }

    float getCriterioB()
    {
      return criterioB;
    }

    float getCriterioC()
    {
      return criterioC;
    }

    virtual float promedio() const
    {
      return criterioA*0.30 + criterioB*0.30 + criterioC*0.40;
    }
    virtual void imprimirReporte() const
    {
      std::cout<<"****REPORTE DEL ALUMNO****"<<endl;
    }
};
