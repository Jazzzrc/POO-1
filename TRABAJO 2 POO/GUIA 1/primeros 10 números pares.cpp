#include <iostream>
using namespace std;

int main() {

    int cantidad;

    cout<< "Ingresar cantidad: ";
    cin >> cantidad;

    for (int i = 0; i <= cantidad; i+=2)
    {
        cout<<"\n"<<i;
    }

}