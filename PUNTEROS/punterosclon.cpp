#include <iostream>
using namespace std;

int main()
{
  int numero = 100;
  int &r = numero;

  cout<<&r<<endl;
  cout<<&numero<<endl;

  r = 200;
  cout<<numero<<endl;

}
