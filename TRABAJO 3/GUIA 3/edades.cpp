#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int cantidad,
      i,
      edad,
      mas,
      menos,
      suma,
      promedio;


  cout<<"Cantidad de Personas: ";
  cin>>cantidad;
  cout<<"**************************************"<<endl;

  mas = 0;
  menos = 0;
  i = 0;
  suma = 0;

  while(i<cantidad)
  {
    i++;
    edad = 20 + rand()%71;
    cout << "\nEdad de persona " << i <<":"<< edad << endl;
    suma += edad;
    promedio = suma/cantidad;

    if(edad>=18)
    {
      ++mas;
    }
    else
    {
      ++menos;
    }
  }

  cout << endl << "************************************************" << endl;
  cout << "\La edad promedio es:" << promedio <<endl;
  cout << "\nLa cantidad de personas mayores de edad: " << mas<<"\n";
  cout << "\nLa cantidad de personas menores de edad: " << menos<<"\n";
  cout << endl;

}
