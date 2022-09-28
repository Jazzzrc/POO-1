#include <iostream>
using namespace std;

int factorial(int);
int potencia(int, int);
void imprimir(int);
int suma(int);
int main(){

  int numero;
  int base,
      exponente;

  cout<<"***** F A C T O R I A L *****\n";
  cout<<"Ingrese numero: ";
  cin>>numero;
  cout<<"Factorial de ("<<numero<<") es: "<<factorial(numero)<<endl;

  cout<<"***** CALCULO DE LA POTENCIA *****\n";
  cout<<"Ingrese base: ";
  cin>>base;
  cout<<"Ingrese exponente: ";
  cin>>exponente;

  cout<<"La potencia es: "<<potencia(base, exponente)<<endl;

  /*IMPRIMIR NUMEROS DEL 1 AL 10*/
  cout<<"LISTAR NUMEROS\n";
  imprimir(1);

  cout<<"\nLA SUMA ES: "<<suma(1);

}

int factorial (int n)
{
  if(n == 0 || n == 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}

int potencia(int base, int exponente)
{
  if (exponente == 0)
  {
    return 1;
  }
  else
  {
    return base * potencia(base, exponente-1);
  }
}

void imprimir(int n)
{
  if (n == 10)
  {
    cout<<n;
  }
  else
  {
    cout<<n<<"\n";
    imprimir(n+1);
  }
}

int suma(int n)
{
  if (n == 10)
  {
    return 0;
  }
  else
  {
    return n + suma(n+1);
  }
}
