#include <iostream>
using namespace std;
void cambio(int *x, int *y)
{
  int aux;
  aux = *x;
  *x = *y;
  *y = aux;
}

int main()
{
  int a;
  int b;

  cout<<"VALOR a : ";
  cin>>a;
  cout<<"VALOR b : ";
  cin>>b;

  cambio(&a,&b);
  cout<<"VALOR a = "<<a<<endl;
  cout<<"VALOR b = "<<b<<endl;
}
