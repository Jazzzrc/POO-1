#include <iostream>
using namespace std;
int main()
{
  int x = 10;
  cout<<&x<<endl;
  float y = 15.5;
  cout<<&y<<endl;
  string nombre = "Pedro";
  cout<<&nombre<<endl;

  int *p = &x;
  cout<<"El valor de la direccion de memoria de x: "<<x<<endl;
  cout<<"El valor del puntero: "<<p<<endl;
  
  *p = 100;
  cout<<"El valor de x: "<<x<<endl;
  
}
