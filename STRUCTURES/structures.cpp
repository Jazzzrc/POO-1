#include <iostream>
#include <cstring>
using namespace std;


struct vendedor
{

	string codVendedor;
	string nomVendedor;
	string apeVendedor;
	float  sueVendedor;

};

int main() {

	string bandera;
	int contador; 

	vendedor vendedor[100];


	contador = 0;


	do
	{
		contador++;
		cout << "*****POS" << contador<< "*****";

	    cout << "\nIngresar codigo: ";
	    getline(cin, vendedor[contador].codVendedor);
	    cout << "Ingresar nombre: ";
		getline(cin,vendedor[contador].nomVendedor);
		cout << "Ingresar apellido: ";
		getline(cin, vendedor[contador].apeVendedor);
		 

		cout << "Ingresar sueldo: ";
		cin >> vendedor[contador].sueVendedor;
		

        contador++;
		cout << "Para continuar pusar SI: ";
		cin >> bandera;
		
		
		cin.ignore();
	} 
	while (bandera == "SI" || bandera =="si");
	
	
	cout<<"REPORTE\n";
	for (int i=0; i<contador;i++){
		cout<<vendedor[i].codVendedor<<"-"<<vendedor[i].nomVendedor<<"-"<<vendedor[i].apeVendedor<<"-"<<vendedor[i].sueVendedor<<"\n";
	}



}
