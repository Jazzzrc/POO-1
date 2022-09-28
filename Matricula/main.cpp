#include <iostream>
#include "matriculaVector.h"
using namespace std;

MatriculaVector matriculaVector;

void menuOpciones();
void agregar();
void listar();
void promedio();

int main()
{
  menuOpciones();
}

void menuOpciones()
{
  int opcion;

  do
  {
    cout<<"*********** MENU DE OPCIONES ************"<<endl;
    cout<<"AGREGAR ESTUDIANTES (1)"<<endl;
    cout<<"LISTAR ESTUDIANTES (2)"<<endl;
    cout<<"PROMEDIO DE PENSIONES (3)"<<endl;
    cout<<"SALIR (4)"<<endl;
    cout<<"*****************************************"<<endl;
    cout<<"Ingresa opcion: ";
    cin>>opcion;
    switch (opcion)
    {
      case 1:system("cls");agregar();break;
      case 2:system("cls");listar();break;
      case 3:system("cls");promedio();break;
      case 4: cout<<"GRACIAS POR MATRICULAR A SU HIJO"<<endl;break;
      default: cout<<"INGRESE UNA OPCION VALIDA [1-6]"<<endl;
    }
  }while(opcion!=4);
}

void agregar()
{
  string 	bandera,
			    nom,
          secc,
          nivel;
  float pens;
	int 	cod,
        grado;
  int fecha;
	do
	{
		cod = matriculaVector.getCorrelativo();
		cout<<"*****CODIGO("<<cod<<")********\n";
		cin.ignore();
    cout<<"*****FECHA("<<fecha<<")*******\n";
		cout<<"INGRESE NOMBRE:";
		cin>>nom;
    cout<<"GRADO: ";
    cin>>grado;
    cout<<"SECCION: ";
    cin>>secc;
    cout<<"NIVEL: ";
    cin>>nivel;
    cout<<"PENSION: S/.";
    cin>>pens;

		Matricula matricula;
		matricula.setCodigo(cod);
    matricula.setFecha(fecha);
		matricula.setNombre(nom);
    matricula.setGrado(grado);
    matricula.setSeccion(secc);
    matricula.setNivel(nivel);
    matricula.setPension(pens);

    matriculaVector.add(matricula);
		matriculaVector.grabarArchivo(matricula);

		cout<<"PARA CONTINUAR(S/N):";
		cin>>bandera;

		system("cls");
	}
	while(bandera =="S" || bandera =="s" );
}

void listar()
{
  for(int i=0;i<matriculaVector.rows();i++)
  {
    cout<<matriculaVector.get(i).getCodigo()<<"-"<<matriculaVector.get(i).getFecha()<<"-"<<matriculaVector.get(i).getNombre()<<"-"<<
    matriculaVector.get(i).getGrado()<<"-"<<matriculaVector.get(i).getSeccion()<<"-"<<matriculaVector.get(i).getNivel()<<"-"<<
    matriculaVector.get(i).getPension()<<endl;
  }
  system("pause");
	system("cls");
}

void promedio()
{
  matriculaVector.getpromediopen();
}
