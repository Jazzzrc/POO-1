#include <iostream>
#include <math.h>
using namespace std;

int main() {

     float peso;
     float estatura;
     float IMC;

     cout<<"Ingresa tu peso: ";
     cin>>peso;
     cout<<"Ingresa tu estatura: ";
     cin>>estatura;

      IMC = peso / std::pow (estatura, 2);

      cout<<"\nTu IMC es: "<<IMC;

      if (IMC < 20){
          cout<<"\nTu grado de obesidad es: Delgado";
      }

      if (IMC >= 20 && IMC < 25){
          cout<<"\nTu grado de obesidad es: Normal";
      }

      if (IMC >= 25 && IMC < 27){
          cout<<"Tu grado de obesidad es: Sobrepeso";
      }

      if (IMC >= 27){
          cout<<"Tu grado de obesidad es: Obesisdad";
      }
return 0;
  
}