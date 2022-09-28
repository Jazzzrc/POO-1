#include <iostream>
using namespace std;

class Edificio
{
  private:
    int codigo;
    int cantidad;
    float precio;
    string direccion;
  public:
    Edificio(int cod, int cantidad, float pre, string dir)
    {
      codigo = cod;
      this->cantidad = cantidad;
      precio = pre;
      direccion = dir;
    }

    void setCodigo(int cod)
    {
      codigo = cod;
    }

    void setCantidad(int cantidad)
    {
      this->cantidad = cantidad;
    }

    void setPrecio(float pre)
    {
      precio = pre;
    }

    void setDireccion(string dir)
    {
      direccion = dir;
    }

    int getCodigo()
    {
      return codigo;
    }

    int getCantidad()
    {
      return cantidad;
    }

    float getPrecio()
    {
      return precio;
    }

    string getDireccion()
    {
      return direccion;
    }

    float getEdificio()
    {
      return cantidad*precio;
    }
};
