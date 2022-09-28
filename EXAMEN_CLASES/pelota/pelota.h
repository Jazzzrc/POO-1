#include <iostream>
using namespace std;

class Pelota
{
  private:
    string marca;
    float pesogra;
    float presionli;
    float diametro;
    float precio;
  public:
    Pelota(string mar, float peso, float presion, float diametro, float pre)
    {
      marca = mar;
      pesogra = peso;
      presionli = presion;
      this->diametro = diametro;
      precio = pre;
    }

    void setMarca(string mar)
    {
      marca = mar;
    }

    void setPeso(float peso)
    {
      pesogra = peso;
    }

    void setPresion(float presion)
    {
      presionli = presion;
    }

    void setDiametro(float diametro)
    {
      this->diametro = diametro;
    }

    void setPrecio(float pre)
    {
      precio = pre;
    }

    //getter
    string getMarca()
    {
      return marca;
    }

    float getPeso()
    {
      return pesogra;
    }

    float getPresion()
    {
      return presionli;
    }

    float getDiametro()
    {
      return diametro;
    }

    float getPrecio()
    {
      return precio;
    }

    float getRadio()
    {
      return diametro/2;
    }

    float getVolumen()
    {
      return 3.1416 * (diametro/2) * (diametro/2);
    }

    float getDescuento()
    {
      return precio * 0.10;
    }

    float getImporte()
    {
      return precio - (precio * 0.10);
    }

};
