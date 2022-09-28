#include <iostream>
using namespace std;

class Matricula
{
  private:
    int codigo,
        grado;
    int fecha;
    string nombre,
           seccion,
           nivel;
    float pension;
  public:
    Matricula()
    {
    }

    void setCodigo(int cod)
    {
      codigo = cod;
    }

    void setFecha(long long fecha)
    {
      this->fecha = fecha;
    }

    void setGrado(int gra)
    {
      grado = gra;
    }

    void setNombre(string nom)
    {
      nombre=nom;
    }

    void setSeccion(string sec)
    {
      seccion = sec;
    }

    void setNivel(string niv)
    {
      nivel = niv;
    }

    void setPension(float pen)
    {
      pension=pen;
    }

    int getCodigo()
    {
      return codigo;
    }

    int getFecha()
    {
      return fecha;
    }

    int getGrado()
    {
      return grado;
    }

    string getNombre()
    {
      return nombre;
    }

    string getSeccion()
    {
      return seccion;
    }

    string getNivel()
    {
      return nivel;
    }

    float getPension()
    {
      return pension;
    }
};
