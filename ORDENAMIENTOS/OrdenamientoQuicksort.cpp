#include<iostream>
using namespace std;
void quick_srt(int array[],int izq, int dere){
      int i = izq;
      int d = dere;
      if (i >= dere) {
          return;
      }
      int mid = array[(i + d) / 2];
      while (i < d) {
          while (i<d && array[i] < mid) {
              i++;
          }
          while (i<d && array[d] > mid) {
              d--;
          }
          if (i < d) {
              int T = array[i];
              array[i] = array[d];
              array[d] = T;
          }
      }
      if (d < i) {
          int T = d;
          d = i;
          i = T;
      }
      quick_srt(array, izq, i);
      quick_srt(array, i == izq ? i+1 : i, dere);
   }
int main()
{
    int i;
    int array[] = {8,4,9,3,5,7,1,6,2};
int tam = (sizeof(array)/sizeof(array[0]));
    cout<<"  ESTRUCTURA DE DATOS   Quick Sort\n";
    cout<<"Valores antes de QuickSort:\n";
    for(i = 0; i < tam; i++)
{
        cout<< array[i]<<"  ";
}
    
cout<<"\n";
    quick_srt(array,0,tam-1);
    cout<<"\n\n\nValores despues de QuickSort:\n\n";
  
    for(i = 0; i <tam; i++)
        cout<<array[i]<<"  ";
    cout<<"\n";
}