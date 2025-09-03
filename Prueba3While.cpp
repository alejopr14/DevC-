#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int nota;
    int mayores = 0, menores = 0;

    while (i <= 10) {
        cout << "Ingrese la nota " << i << ": ";cin >> nota;
        if (nota >= 7)
            mayores++;
        else
            menores++; i++;
    }

    cout << "Notas mayores o iguales a 7: " << mayores << endl;
    cout << "Notas menores a 7: " << menores << endl;

    return 0;
}
