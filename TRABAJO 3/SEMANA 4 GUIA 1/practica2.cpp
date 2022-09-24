#include <iostream>
using namespace std;

string curso, tipo, costos, nivel,rpta;
float experto, intermedio, basico,mayor;
int codigo, cantc1B,cantc1I,cantc1E, cantc2B, cantc2I;

void scostos(string curso, string nivel){

    if (curso == "c1"){

        cout<<"\n*****Niveles del curso*****\n";
        cout<<"experto (E) = 200\n";
        cout<<"intermedio (I) = 150\n";
        cout<<"basico (B)=100\n";
        cout<<"Nivel de curso: ",
        cin>>nivel;

        if (nivel == "E"){
            cantc1E++;
            experto = 200;
            cout<<cantc1E;

        }
        else if (nivel == "I"){
            cantc1I++;
            intermedio = 150;
            cout<<cantc1I;

        }
        else if (nivel == "B"){
            cantc1B++;
            basico = 100;
            cout<<cantc1B;

        }
    }

     else if (curso == "c2"){

        cout<<"\n*****Niveles del curso*****\n";
        cout<<"experto (E) = 250\n";
        cout<<"intermedio (I) = 2000\n";
        cout<<"basico (B)=150\n";
        cout<<"Nivel de curso: ",
        cin>>nivel;

        if (nivel == "E"){
            experto = 250;
            cantc1E++;
            cout<<cantc1E;
        }
        else if (nivel == "I"){
            cantc1E++;
            cout<<cantc1E;        

        }
        else if (nivel == "B"){
         basico = 150;
         cantc1E++;
            cout<<cantc1E;

        }
    }
    
    else if (curso == "c3"){
        experto = 150;
        intermedio = 100;
        basico = 50;
        
        cout<<"\n*****Niveles del curso*****\n";
        cout<<"experto (E) = 150\n";
        cout<<"intermedio (I) = 100\n";
        cout<<"basico (B)=50\n";
        cout<<"Nivel de curso: ",
        cin>>nivel;

        if (nivel == "E"){

        }
        else if (nivel == "I"){

        }
        else if (nivel == "B"){
            
        }
    }
}



int main(){
    
    bool bandera = false;

    do{
     cout<<"\n*********CURSOS************\n";
    cout<<"Curso 1(c1)\n";
    cout<<"Curso 2(c2)\n";
    cout<<"Curso 3(c3)\n";
    cout<<"Dijite el codigo del curso que desea tomar: ";
    cin>>curso;

    scostos(curso, nivel);

    cout<<"Desea continuar(SI/si): ";
        cin>>rpta;

        if (rpta=="SI"||rpta=="si"){

            bandera = true;
            }

        else {
            bandera=false;
        }
        
    }while(bandera == true);


}