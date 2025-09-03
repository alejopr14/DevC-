#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingrese el numero para ver su tabla de multiplicar: ";cin >> num;

    cout << "Tabla de multiplicar del " << num << " hasta el 15:" << endl;

    for (int i = 1; i <= 15; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
