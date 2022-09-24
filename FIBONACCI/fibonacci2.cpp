#include <iostream>
#include <cstring>
using namespace std;
int memo[100];
int fibonacci(int n, int memo[])
{
  if (memo[n] != -1)
  {
    return memo[n];
  }
  if (n<=1)
  {
    memo[n] = n;
    return n;
  }
  else {
    int adicional = fibonacci(n-1, memo) + fibonacci(n-2,memo);
    memo[n]=adicional;
    return adicional;
  }
}

int main()
{
  int numero;
  memset(memo,-1,sizeof(memo));
  cout<<"CANTIDAD DE NUMEROS A CALCULAR: ";
  cin>>numero;

  for(int i=1;i<=numero;i++)
  {
    cout<<fibonacci(i, memo)<<"   ";
  }
}
