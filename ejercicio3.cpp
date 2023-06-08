#include <iostream>
using namespace std;

int main() {
    int valor1, valor2, valor3;
    cout << "Ingrese el primer valor: ";
    cin >> valor1;
    cout << "Ingrese el segundo valor: ";
    cin >> valor2;
    cout << "Ingrese el tercer valor: ";
    cin >> valor3;

    int mayor = (valor1 > valor2) ? ((valor1 > valor3) ? valor1 : valor3) : ((valor2 > valor3) ? valor2 : valor3);

    cout << "El mayor valor ingresado es: " << mayor << endl;

    return 0;
}