#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int cantidad,
		s50,
		s100,
		s150,
		sm,
		stock;
	
	cout<<"Cantidad de productos: ";
	cin>>cantidad;
	
	for(int i=1;i<=cantidad; i++)
	{
		stock=rand()%201;
		cout<<"\nStock de producto "<< i <<": "<<stock<<endl;
		
		if (stock<50)
		{
			++s50;
		}
		else if(stock>=50 && stock <100)
		{
			++s100;
		}
		else if(stock>=100 && stock<150)
		{
			++s150;
		}
		else if(stock>=150)
		{
			++sm;
		}
	}
	
	cout<<"\n*********************************"<<endl;
	cout<<"\nStock menor a 50: "<<s50<<endl;
	cout<<"\nStock mayor/igual a 50 y menor a 100: "<<s100<<endl;
    cout<<"\nStock mayor/igual a 100 y menor a 150: "<<s150<<endl;
    cout<<"\nStock mayor a 150: "<<sm<<endl;
	
}
