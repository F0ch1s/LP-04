#include <iostream>
using namespace std;

int main() {
    int valor1;
    int valor2;
    int valor3;
    cout << "Ingrese el primer valor: ";
    cin >> valor1;
    cout << "Ingrese el segundo valor: ";
    cin >> valor2;
    cout << "Ingrese el tercer valor: ";
    cin >> valor3;

    int mayor = valor1;

    if (valor2 > mayor) 
    {
        mayor = valor2;
    }

    if (valor3 > mayor) 
    {
        mayor = valor3;
    }

    cout << "El mayor valor ingresado es: " << mayor << endl;

    return 0;
}
