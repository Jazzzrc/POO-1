#include <iostream>25
#include <math.h>
using namespace std;

int main() {

    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float promedio;


    cout<<"Ingrese Nota 1: ";
    cin>>nota1;
    cout<<"Ingrese Nota 2: ";
    cin>>nota2;
    cout<<"Ingrese Nota 3: ";
    cin>>nota3;
    cout<<"Ingrese Nota 4: ";
    cin>>nota4;

    promedio = (nota1 + nota2 + nota3 + nota4) / 4;

    if (promedio >= 17 && promedio <=20){
        cout<<"\nLa categoria es: A"<<"\nPromedio: "<<promedio;
    }

    if (promedio < 17 && promedio >= 14){
        cout<<"\nLa categoria es: B"<<"\nPromedio: "<<promedio;
    }

    if (promedio < 14 && promedio >= 12){
        cout<<"\nLa categoria es: C"<<"\nPromedio: "<<promedio;
    }
    if (promedio < 12 && promedio >= 0){
        cout<<"\nLa categoria es: D"<<"\nPromedio: "<<promedio;
    }


return 0;
}

