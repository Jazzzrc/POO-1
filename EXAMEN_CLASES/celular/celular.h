#include <iostream>
using namespace std;
class Celular
{
  private:
    int numero;
    string usuario;
    int segconsumidos;
    float precioporseg;
  public:
    Celular(int nume, string usu, int segconsu, float preporseg)
    {
      numero = nume;
      usuario = usu;
      segconsumidos = segconsu;
      precioporseg = preporseg;
    }

    void setNumero(int nume)
    {
      numero = nume;
    }

    void setUsuario(string usu)
    {
      usuario = usu;
    }

    void setSegConsumidos(int segconsu)
    {
      segconsumidos = segconsu;
    }

    void setPrecio(float preporseg)
    {
      precioporseg = preporseg;
    }

    int getNumero()
    {
      return numero;
    }

    string getUsuario()
    {
      return usuario;
    }

    int getSegConsumidos()
    {
      return segconsumidos;
    }

    float getPrecio()
    {
      return precioporseg;
    }

    float getCosto()
    {
      return segconsumidos * precioporseg;
    }

    float getIgv()
    {
      return (segconsumidos*precioporseg)*0.18;
    }

    float getTotal()
    {
      return (segconsumidos * precioporseg) + ((segconsumidos*precioporseg)*0.18);
    }
};
