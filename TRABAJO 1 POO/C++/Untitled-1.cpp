#include<iostream>
using namespace std;

void ordenar_des(int [], int);
int main()
{

 int xn;
 int num[10];

 for (int i=1;i<=10;i++){
  cout <<"Ingrese numero "<<i<<": ";
  cin>>num[i];

 }

 cout<<"\n";
 cout <<"Orden descendente "<<"\n";
 ordenar_des(num,10);

 for (int i=1;i<=10;i++){
  cout <<num[i]<<"\n";

 }
 return 0;
}

void ordenar_des(int a[], int n)
{
   int aux;
   for (int i=n; i>=0; i--)
      for (int j=0; j<=i; j++)
         if (a[j] < a[j+1])
          {
            aux = a[j];
            a[j]= a[j+1];
            a[j+1]= aux;
           }
}
