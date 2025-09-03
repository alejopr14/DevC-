#include <iostream>
using namespace std;

int main() {
    int valor;
    cout << "Ingrese un valor positivo: ";cin >> valor;

    int i = 1;
    while (i <= valor) {
        cout << i << endl;i++;
    }

    return 0;
}
