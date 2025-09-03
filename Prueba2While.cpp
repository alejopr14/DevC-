#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int numero, suma = 0;

    while (i <= 10) {
        cout << "Ingrese el numero " << i << ": ";cin >> numero;
        suma += numero; i++;
    }

    int promedio = suma / 10;
    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
