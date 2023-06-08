#include <iostream>

using namespace std;

int main() {
    int numero1;
    int numero2;
    int rpta;
    cout << "Ingrese primer número: ";
    cin >> numero1;
    cout<<"Ingrese segundo número: ";
    cin >> numero2;
    rpta=numero1+numero2;
    string mensaje = (rpta > -1) ? to_string(rpta) : "El número es negativo";
    cout << mensaje << endl;

    return 0;
}