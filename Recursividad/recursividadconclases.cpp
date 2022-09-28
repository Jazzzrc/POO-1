#include <iostream>
using namespace std;
class Operaciones 
{
    private:
        int  numero;
    public:
        Operaciones(int numero) 
        {
            this->numero = numero;
        }
    int factorial(int n)
    {
        if (n == 0)
        return 1;
        else
        return (n * factorial(n - 1));
    }
    void imprimirNumero() 
    {
        cout << "El factorial es:" << factorial(numero);
    }
};
int main() 
{
    int numero;
    cout << "Ingrese el numero a calcular:";
    cin >> numero;
    Operaciones obj(numero);
    obj.imprimirNumero();
    return 0;
}