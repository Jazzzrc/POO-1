#include <iostream>
#include <vector>
#include <fstream>
#include "Matricula.h"
using namespace std;

class MatriculaVector
{
  private:
    vector<Matricula> vectorMatricula;
  public:
    MatriculaVector()
    {
    }

    int getCorrelativo()
    {
      if(vectorMatricula.size() == 0)
      {
        return 1;
      }

      else
      {
        return vectorMatricula[vectorMatricula.size()-1].getCodigo() + 1;
      }
    }

    double getpromediopen()
    {
      int i;
      float st=0;
      float promedio;
      for(int i=0; i<vectorMatricula.size(); i++)
      {
        st+=vectorMatricula[i].getPension();
      }
      promedio=st/vectorMatricula.size();
      return promedio;
    }

    Matricula get(int pos)
		{
			return vectorMatricula[pos];
		}

    int rows()
		{
			return vectorMatricula.size();
		}

    void add(Matricula obj)
		{
			vectorMatricula.push_back(obj);
		}

    void grabarArchivo(Matricula obj)
		{
			try
			{
				fstream archivoMatricula;
				archivoMatricula.open("matricula.csv",ios::app);
				if(archivoMatricula.good())
				{
					archivoMatricula<<obj.getCodigo()<<";"<<obj.getFecha()<<";"<<obj.getNombre()<<";"<<obj.getGrado()<<";"<<obj.getSeccion()<<";"<<obj.getNivel()<<";"<<obj.getPension()<<";"<<endl;
					archivoMatricula.close();
				}
				else
				{
					cout<<"Archivo en mal estado!!!";
				}
			}
			catch(exception e)
			{
				cout<<"Ocurrio un error al grabar en el archivo";
			}
		}
};
