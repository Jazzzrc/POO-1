#include <iostream>
using namespace std;

class Video
{
  private:
    int codigo;
    string nombre;
    float duracion;
    float precio;
    float tipo;

  public:
    Video(int cod, string nom, float dur, float pre, float tip)
    {
      codigo = cod;
      nombre = nom;
      duracion = dur;
      precio = pre;
      tipo = tip;
    }

    void setCodigo(int cod)
    {
      codigo = cod;
    }

    void setNombre(string nom)
    {
      nombre = nom;
    }

    void setDuracion(float dur)
    {
      duracion = dur;
    }

    void setPrecio(float pre)
    {
      precio = pre;
    }

    void setTipo(float tip)
    {
      tipo = tip;
    }

    int getCodigo()
    {
      return codigo;
    }

    string getNombre()
    {
      return nombre;
    }

    float getDuracion()
    {
      return duracion;
    }

    float getPrecio()
    {
      return precio;
    }

    float getTipo()
    {
      return tipo;
    }

    float getPrecioDolares()
    {
      return precio / tipo;
    }
};
