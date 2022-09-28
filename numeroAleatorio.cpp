#include <iostream>
#include <cstdlib>
using namespace std;


//Codigo para generar un número aleatorio y encontrar mediante "n" cantidad de intentos

int main()
{
  int numero,
      maquina,
      cantidad;

  maquina = 1 +  rand()%101;
  do
  {
    ++cantidad;
    cout<<"Ingrese su numero[1-100]: ";
    cin>>numero;

    if (numero < maquina)
    {
      cout<<"El numero secreto es mayor"<<endl;
    }

    else if ( numero > maquina)
    {
      cout <<"El numero secreto es menor"<<endl;
    }
  }
  while(numero < maquina || numero > maquina);

  cout<<"LO LOGRASTE!!!"<<endl;
  cout<<"ENCONTRASTE EL NUMERO SECRETO EN "<<cantidad<<" INTENTOS"<<endl;
}
