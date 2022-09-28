#include <iostream>
using namespace std;

class Trabajador
{
  private:
    int codigo;
    string nombre;
    int horastra;
    float tarifaHora;
  public:
    Trabajador(int cod, string nom, int horas, float tarifa)
    {
      codigo = cod;
      nombre = nom;
      horastra = horas;
      tarifaHora = tarifa;
    }

    void setCodigo(int cod)
    {
      codigo = cod;
    }

    void setNombre(string nom)
    {
      nombre = nom;
    }

    void setHoras(int horas)
    {
      horastra = horas;
    }

    void setTarifa(float tarifa)
    {
      tarifaHora = tarifa;
    }

    int getCodigo()
    {
      return codigo;
    }

    string getNombre()
    {
      return nombre;
    }

    int getHoras()
    {
      return horastra;
    }

    float getTarifa()
    {
      return tarifaHora;
    }

    float getSueldoBru()
    {
      return horastra * tarifaHora;
    }

    float getDescuento()
    {
      return (horastra * tarifaHora) * 0.15;
    }

    float getSueldoNet()
    {
      return (horastra * tarifaHora) - ((horastra * tarifaHora) * 0.15);
    }
};
