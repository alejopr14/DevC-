#include <iostream>
using namespace std;

int main() {
    int n, numero, contadorNegativos = 0;

    cout << "Cuantos numeros desea introducir ";cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el numero " << i << ": ";cin >> numero;
        if (numero < 0) {
            contadorNegativos++;
        }
    }

    cout << "Has introducido " << contadorNegativos << " numeros negativos." << endl;

    return 0;
}
