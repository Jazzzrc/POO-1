#include <iostream>
using namespace std;

class Persona
{
  private:
    string nombre;
    string apellido;
    int edad;
    float talla;
    float peso;
  public:
    Persona(string nom, string ape, int edad, float talla, float peso)
    {
      nombre = nom;
      apellido = ape;
      this->edad = edad;
      this->talla = talla;
      this->peso = peso;
    }

    void setNombre(string nom)
    {
      nombre = nom;
    }

    void setApellido(string ape)
    {
      apellido = ape;
    }

    void setEdad(int edad)
    {
      this->edad = edad;
    }

    void setTalla(float talla)
    {
      this->talla = talla;
    }

    void setPeso(float peso)
    {
      this->peso = peso;
    }

    string getNombre()
    {
      return nombre;
    }

    string getApellido()
    {
      return apellido;
    }

    int getEdad()
    {
      return edad;
    }

    float getTalla()
    {
      return talla;
    }

    float getPeso()
    {
      return peso;
    }

    float Mayor()
    {
      if (edad>=18)
      {
        cout<<"Mayor de Edad"<<endl;
      }

      else{
        cout<<"Menor de Edad"<<endl;
      }
    }
};
