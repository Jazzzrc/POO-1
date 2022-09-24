#include <iostream>
using namespace std;

int main() {

    float x, y,i;

    cout << "Valor inicial de x: ";
    cin >> x;

    i = 0;

    while (i < 11) {
        i++;

        x = x + 0.25;

        y = (pow(x, 3) + (3 * x) + 1) / (pow(x, 2) + 2);

        cout << "\nEL valor de x es: " << x<<"\n";
        cout <<y<<"\n";

    }


}