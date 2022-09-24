#include <iostream>
using namespace std;

float fsueldoBruto(string categoria, int horas){

    if(categoria == "c11" || categoria=="C11"){

        return horas * 27.5;
    }

    else if(categoria=="c21"|| categoria=="C21"){

        return horas * 25;
    }
    
    else if(categoria=="c31"||categoria=="C31"){

        return horas * 23.5;
    }   
}

float fdescuento(float sueldoBruto){

    if (sueldoBruto > 3500){
        return sueldoBruto*0.15;

    }

    else {
        return sueldoBruto*0.11;

    }
}

float fsueldoNeto (float sueldoBruto, float descuento){
    return sueldoBruto-descuento;

}

void imprimirResul(float sueldoBruto, float descuento, float sueldoNeto){

    cout<<"\nSueldo bruto es: "<<sueldoBruto<<endl;
    cout<<"Descuento es: "<<descuento<<endl;
    cout<<"Sueldo neto es: "<<sueldoNeto<<endl;

}

int main(){

    string categoria,rpta;
    int horas;
    float sueldoBruto, descuento, sueldoNeto;
    bool bandera = false;

    do{
        cout<<"\nIngrese categoria de trabajador: ";
        cin>>categoria;
        cout<<"Ingrese horas: ";
        cin>>horas;

        sueldoBruto = fsueldoBruto(categoria, horas);
        descuento = fdescuento(sueldoBruto);
        sueldoNeto = fsueldoNeto(sueldoBruto, descuento);
        imprimirResul(sueldoBruto,descuento,sueldoNeto);


        cout<<"\nIngresar siguiente trabajador: ";
        cin>>rpta;
        cout<<"****************************************************";

        if(rpta=="si"){
            bandera = true;
        }
        else {
            bandera = false;
        }

    } while(bandera == true);

    

return 0;
}

/*========================================================== GLOBALES ==============================================================
====================================================================================================================================
====================================================================================================================================
====================================================================================================================================
====================================================================================================================================
===================================================================================================================================*/


#include <iostream>
using namespace std;


string categoria,rpta;
int horas;
float sueldoBruto, descuento, sueldoNeto;
bool bandera = false;


float fsueldoBruto(string categoria, int horas){

    if(categoria == "c11" || categoria=="C11"){

        return horas * 27.5;
    }

    else if(categoria=="c21"|| categoria=="C21"){

        return horas * 25;
    }
    
    else if(categoria=="c31"||categoria=="C31"){

        return horas * 23.5;
    }   
}

float fdescuento(float sueldoBruto){

    if (sueldoBruto > 3500){
        return sueldoBruto*0.15;

    }

    else {
        return sueldoBruto*0.11;

    }
}

float fsueldoNeto (float sueldoBruto, float descuento){
    return sueldoBruto-descuento;

}

void imprimirResul(float sueldoBruto, float descuento, float sueldoNeto){

    cout<<"\nSueldo bruto es: "<<sueldoBruto<<endl;
    cout<<"Descuento es: "<<descuento<<endl;
    cout<<"Sueldo neto es: "<<sueldoNeto<<endl;

}

int main(){

    do{
        cout<<"\nIngrese categoria de trabajador: ";
        cin>>categoria;
        cout<<"Ingrese horas: ";
        cin>>horas;

        sueldoBruto = fsueldoBruto(categoria, horas);
        descuento = fdescuento(sueldoBruto);
        sueldoNeto = fsueldoNeto(sueldoBruto, descuento);
        imprimirResul(sueldoBruto,descuento,sueldoNeto);


        cout<<"\nIngresar siguiente trabajador: ";
        cin>>rpta;
        cout<<"****************************************************";

        if(rpta=="si"){
            bandera = true;
        }
        else {
            bandera = false;
        }

    } while(bandera == true);

    

return 0;
}