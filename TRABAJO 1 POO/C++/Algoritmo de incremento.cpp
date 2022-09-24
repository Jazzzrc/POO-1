#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float pasaje;
    int cantidad;
    float incremento;
    float real;
    float importepagar;
    int chocolates;
    
    cout<<"Precio Lima - Huanuco: ";
    cin>>pasaje;
    cout<<"Cantidad de pasages: ";
    cin>>cantidad;

    incremento = 0.35 * pasaje;
    real = pasaje + incremento;
    importepagar = real * cantidad;
    chocolates = cantidad * 3;

      
    cout<<"\nIncremento:S/."<<incremento;
    cout<<"\nPasage:S/."<<real;
    cout<<"\nImporte total:S/."<<importepagar;
    cout<<"\nChocolates: "<<chocolates;

return 0;
  
}
