#include <iostream>
using namespace std;

class Computadora
{
  private:
    int codigo;
    string marca;
    string color;
    float precio;
  public:
    Computadora(int cod, string mar, string col, float pre)
    {
      codigo = cod;
      marca = mar;
      color = col;
      precio = pre;
    }

    void setCodigo(int cod)
    {
      codigo = cod;
    }

    void setMarca(string mar)
    {
      marca = mar;
    }

    void setColor(string col)
    {
      color = col;
    }

    void setPrecio(float pre)
    {
      precio = pre;
    }

    int getCodigo()
    {
      return codigo;
    }

    string getMarca()
    {
      return marca;
    }

    string getColor()
    {
      return color;
    }

    float getPrecio()
    {
      return precio;
    }

    float getPrecioSoles()
    {
      return precio * 2.58;
    }

    float getPrecioEuros()
    {
      return precio * 1.25;
    }
};
