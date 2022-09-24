#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int personas, i, hijos, cantidad03, cantidad35, cantidad57;

    cout << "Ingresar cantidad de personas: ";
    cin >> personas;

    cout << "\n***********************************************" << endl;

    i = 0;
    cantidad03 = 0;
    cantidad35 = 0;
    cantidad57 = 0;


    while (i < personas) {
        i++;
        hijos = rand() % 8;
        cout << "\nCantidad de hijos de familia [" << i << "]: " << hijos;

        if (hijos < 3) {
            ++cantidad03;
        }

        else if (hijos >= 3 && hijos <= 5) {
            ++cantidad35;
        }

        else if (hijos >= 6 && hijos <= 7) {
            ++cantidad57;
        }
    }
    cout << endl<<"\n***********************************************" << endl;
    cout << "\nFamilias con menos de 3 hijos: "<<cantidad03;
    cout << "\nFamilias con 3 a 5 hijos: "<<cantidad35;
    cout << "\nFamilias con 6 a más hijos: "<<cantidad57 << endl;
}
