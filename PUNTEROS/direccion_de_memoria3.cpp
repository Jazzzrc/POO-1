#include <iostream>
using namespace std;
int getMaximo(int n[])
{
  int maximo = n[0];
  for(int i=0; i<5; i++)
  {
    if (n[i] > maximo)
    {
      maximo = n[i];
    }
  }
  return maximo;
}

int getMinimo(int n[])
{
  int minimo = n[0];
  for(int i=0;i<5;i++)
  {
    if (n[i] < minimo)
    {
      minimo = n[i];
    }
  }
  return minimo;
}

void getMaximoMinimo(int n[], int *max, int *min)
{
  for(int i=1; i<5; i++)
  {
    if (n[i] > *max)
    {
      *max = n[i];
    }
    if (n[i] < *min)
    {
      *min = n[i];
    }
  }
}


int main()
{
  int numero[]={100,5,30,2,56};
  cout<<"El maximo es: "<<getMaximo(numero)<<endl;
  cout<<"El minimo es: "<<getMinimo(numero)<<endl;

  int maximo = numero[0];
  int minimo = numero[0];

  getMaximoMinimo(numero, &maximo, &minimo);
  cout<<"MAXIMO: "<<maximo<<endl;
  cout<<"MINIMO: "<<minimo<<endl;

}
