#include <iostream>
using namespace std;
const int N=5;
int tablero[N][N];
int d[8][2] = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};

void escribirTablero()
{
  int i,j;
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      cout<<tablero[i][j]<<"|";
    }
    cout<<endl;
  }
  cout<<endl;
}

void saltoCaballo(int i, int x, int y, bool &exito)
{
  int nx,ny;
  int k=0; //Iterador para controlar los desplazamientos del saltoCaballo
  exito = false;
  do
  {
    k++;
    nx = x + d[k-1][0];
    ny = y + d[k-1][1];
    //Verificando si las coordenadas son correctas
    if((nx>=0) && (nx<N) && (ny>=0) && (ny<N) && (tablero[nx][ny] == 0))
    {
      //guardar el movimiento
      tablero[nx][ny] = i;
      escribirTablero(); //mostrar como el caballo se desplazamientos
      if(i < N*N)
      {
        saltoCaballo(i + 1,nx,ny, exito);
        if(!exito)
        {
          tablero[nx][ny] = 0;
        }
      }
      else
      {
        exito = true;
      }
    }
  }while((k<8 && !exito));
}

int main()
{
  bool exito;
  int fila = 1;
  int col = 0;
  tablero[fila][col] = 1;
  saltoCaballo(2, fila, col, exito);
  if(exito)
  {
    cout<<"Camino encontrado"<<endl;
    escribirTablero();
  }
  else
  {
    cout<<"Camino no encontrado"<<endl;
  }
  return 0;
}
