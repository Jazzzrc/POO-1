#include <iostream>
#include <math.h>
using namespace std;

int main() 
{

       float peso;
       float estatura;
       float IMC;

       cout<<"Ingresa tu peso: ";
       cin>>peso;
       cout<<"Ingresa tu estatura: ";
       cin>>estatura;

       IMC = peso / std::pow (estatura, 2);

       cout<<"Tu IMC es: "<<IMC;
      
           
return 0;
            
}