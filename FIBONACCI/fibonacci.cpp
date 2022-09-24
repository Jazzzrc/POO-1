#include <iostream>
using namespace std;
int fibonacci(int n)
{
  if (n == 1 || n == 2)
  {
    return 1;
  }
  else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

int main()
{
  int numero;
  cout<<"CANTIDAD DE NUMEROS A CALCULAR: ";
  cin>>numero;

  for(int i=1;i<=numero;i++)
  {
    cout<<fibonacci(i)<<"   ";
  }
}
