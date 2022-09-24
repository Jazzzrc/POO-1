#include <iostream>
#include <math.h>
using namespace std;

int main() {

   float edad;
   float peso;
   float frecuencia;

   cout<<"Edad: ";
   cin>>edad;
   cout<<"Peso: ";
   cin>>peso;

   frecuencia = 210 - (0.5 * edad) - (0.01 * peso + 4);

   cout<<"El ritmo cardiaco es: "<<frecuencia;
        
return 0;
  
}