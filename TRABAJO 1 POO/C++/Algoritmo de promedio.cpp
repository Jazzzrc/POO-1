#include <iostream>
#include <math.h>
using namespace std;

int main() {

   float prac1;
   float prac2;
   float examparcial;
   float examfinal;
   float promedio;

   cout<<"Ingresa tu nota de Práctica 1: ";
   cin>>prac1;
   cout<<"Ingresa tu nota de Práctica 2: ";
   cin>>prac2;
   cout<<"Ingresa tu nota de Examen Parcial: ";
   cin>>examparcial;
   cout<<"Ingresa tu nota de Examen Final: ";
   cin>>examfinal;

   promedio = 0.10 * prac1 + 0.10 * prac2 + 0.35 * examparcial + 0.45 * examfinal;

   cout<<"Tu promedio es: "<<promedio;
  
return 0;
  
}