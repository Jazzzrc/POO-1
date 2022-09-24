#include <iostream>
using namespace std;

string categoria;
float horas, bruto, descuento, neto;

void entrada() {
	cout<<"Ingresar categoria: ";
	cin>>categoria;
	
	cout<<"Ingresar horas: ";
	cin>>horas;
	
}

void sueldobruto() {
	if (categoria == "c11") {
		bruto = 27.50 * horas;
		
	}
	
	else if ( categoria == "c21") {
		bruto = 25.0 * horas;
		
	}
	
	else if ( categoria == "c31") {
		bruto = 23.50 * horas;
		
	}
	 else {
	 	cout<<"\nIngresar solo categoria c11, c21, c31\n";
	 	
	 }
}

void impdescuento (){
	if ( bruto > 3500){
		descuento = 0.15 * bruto;
		
	}
	else {
		descuento = 0.11 * bruto;
		
	}
}

void sueldoneto() {
	
	neto = bruto - descuento;	
}

void impresion() {
	
	cout<<"\nEl sueldo bruto es: S/."<<bruto;
	cout<<"\nEl descuento es: S/."<<descuento;
	cout<<"\nEl sueldo neto es: S/."<<neto<<endl;
	
}

int main(){
	entrada();
	sueldobruto();
	impdescuento();
	sueldoneto();
	impresion();
	
}

