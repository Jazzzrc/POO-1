#include<iostream>
#include"alumno.h"
#include"profesor.h"
using namespace std;
int main()
{
	Alumno objAlumno(1,"Daniel Diaz",100, 20,20);

	cout<<"Datos del Alumno\n";
	cout<<"-----------------\n";
	cout<<"Codigo:"<<objAlumno.getCodigo()<<endl;
	cout<<"Nombre y Apellidos:"<<objAlumno.getNomApe()<<endl;
	cout<<"Cantidad Horas:"<<objAlumno.getCantidad()<<endl;
	cout<<"PC 01:"<<objAlumno.getN1()<<endl;
	cout<<"PC 02:"<<objAlumno.getN2()<<endl;
  	cout<<"Promedio: "<<objAlumno.promedio()<<endl;

	Profesor objProfesor(1,"Pedro Infante",50, 60,15,16,20);

	cout<<"Datos del Profesor\n";
	cout<<"-----------------\n";
	cout<<"Codigo:"<<objProfesor.getCodigo()<<endl;
	cout<<"Nombre y Apellidos:"<<objProfesor.getNomApe()<<endl;
	cout<<"Cantidad Horas:"<<objProfesor.getCanHoras()<<endl;
	cout<<"Costo por Hora:"<<objProfesor.getCostoHora()<<endl;
	cout<<"Sueldo:"<<objProfesor.getSueldo()<<endl;
	cout<<"Criterio A: "<<objProfesor.getCriterioA()<<endl;
	cout<<"Criterio B: "<<objProfesor.getCriterioB()<<endl;
	cout<<"Criterio C: "<<objProfesor.getCriterioC()<<endl;
	cout<<"Promedio: "<<objProfesor.promedio()<<endl;
}
