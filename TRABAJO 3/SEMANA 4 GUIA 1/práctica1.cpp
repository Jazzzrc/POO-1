#include <iostream>
using namespace std;

string categoria,rpta;
int vendido;
float sueldoBasico,comision,sueldoBruto,descuento, sueldoNeto,sueldoMes;
int mes;
bool bandera = false;

float fsueldoBasico(string categoria){

    if (categoria == "E1" || categoria == "e1"){
        return 2500;

    }

    else if (categoria == "E2" || categoria == "e2"){
        return 2250;

    }

    else if (categoria == "E3" || categoria == "e3"){
        return 2000;

    }
}

float fcomision(int vendido){
    
    if (vendido > 9000){
        return vendido * 0.11;
    }

    else if (vendido > 6000 && vendido <= 9000){
        return vendido * 0.9;
    }

    else if (vendido > 3000 && vendido <= 6000){
        return vendido * 0.7;
    }

    else if (vendido <=3000){
        return vendido * 0.5;
    }
}

float fsueldoBruto(float sueldoBasico, float comision){
    return sueldoBasico + comision;
}

float fdescuento(float sueldoBruto){
    return sueldoBruto * 0.15;
}
float fsueldoNeto(float sueldoBruto, float descuento){
    return sueldoBruto - descuento;
}

float fsueldoMes(float sueldoNeto, int mes){
    cout<<"Mes(es): ";
    cin>>mes;
    return sueldoNeto * mes;
}

void resultados(float sueldoBasico, float comision, float sueldoBruto, float descuento, float sueldoNeto){

    cout<<"Sueldo Basico: "<< sueldoBasico<<endl;
    cout<<"Comision: "<< comision<<endl;
    cout<<"Sueldo Bruto:" << sueldoBruto<<endl;
    cout<<"Descuento: "<<descuento<<endl;
    cout<<"Sueldo Neto: "<<sueldoNeto<<endl;
    cout<<"Sueldo de mes: "<<sueldoMes<<endl;
}

int main(){

    do{
        cout<<"Ingrese categoria: ";
        cin>>categoria;
        cout<<"Ingrese importe vendido: ";
        cin>>vendido;

        cout<<"\n====================================\n";
        cout<<"\n*****"<<categoria<<"*****\n";
        sueldoBasico = fsueldoBasico(categoria);
        comision = fcomision(vendido);
        sueldoBruto = fsueldoBruto(sueldoBasico,comision);
        descuento = fdescuento(sueldoBruto);
        sueldoNeto= fsueldoNeto(sueldoBruto,descuento);
        sueldoMes= fsueldoMes(sueldoNeto, mes);
        resultados(sueldoBasico,comision,sueldoBruto,descuento,sueldoNeto);
        cout<<"\n====================================\n";


        cout<<"Desea continuar(SI/si): ";
        cin>>rpta;

        if (rpta=="SI"||rpta=="si"){

            bandera = true;
            }

        else {
            bandera=false;
        }

    }while(bandera == true);
}
