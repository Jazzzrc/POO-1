#include<iostream>
using namespace std;
class Tablet
{
  private:
    int codigo;
    string marca;
    string color;
    float precio;

  public:
    Tablet(int cod, string mar, string colo, float pre)
    {
      codigo = cod;
      marca = mar;
      color = colo;
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

    void setColor(string colo)
    {
      color = colo;
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
      return precio * 3.29;
    }


};
