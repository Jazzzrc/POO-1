#include <iostream>
#include "pelota.h"
using namespace std;

int main()
{
    Pelota objpelo("Adidas", 0.5, 0.50, 30, 50);
    cout<<"MARCA: "<<objpelo.getMarca()<<endl;
    cout<<"PESO: "<<objpelo.getPeso()<<"k"<<endl;
    cout<<"PRESION: "<<objpelo.getPresion()<<endl;
    cout<<"DIAMETRO: "<<objpelo.getDiametro()<<endl;
    cout<<"PRECIO: "<<objpelo.getPrecio()<<endl;
    cout<<"RADIO: "<<objpelo.getRadio()<<endl;
    cout<<"VOLUMEN: "<<objpelo.getVolumen()<<endl;
    cout<<"DESCUENTO: "<<objpelo.getDescuento()<<endl;
    cout<<"IMPORTE A PAGAR: "<<objpelo.getImporte()<<endl;

    objpelo.setDiametro(objpelo.getDiametro() - 1);
    objpelo.setPrecio(objpelo.getPrecio() + (objpelo.getPrecio()*0.2));
    cout<<"\n";
    cout<<"****VALORES ACTUALIZADOS****";
    cout<<"MARCA: "<<objpelo.getMarca()<<endl;
    cout<<"PESO: "<<objpelo.getPeso()<<"k"<<endl;
    cout<<"PRESION: "<<objpelo.getPresion()<<endl;
    cout<<"DIAMETRO: "<<objpelo.getDiametro()<<endl;
    cout<<"PRECIO: "<<objpelo.getPrecio()<<endl;
    cout<<"RADIO: "<<objpelo.getRadio()<<endl;
    cout<<"VOLUMEN: "<<objpelo.getVolumen()<<endl;
    cout<<"DESCUENTO: "<<objpelo.getDescuento()<<endl;
    cout<<"IMPORTE A PAGAR: "<<objpelo.getImporte()<<endl;

}
