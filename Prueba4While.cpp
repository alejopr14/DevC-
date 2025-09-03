#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero del 1 al 10: ";cin >> num;

    int i = 1;
    while (i <= 12) {
        cout << num << " x " << i << " = " << num * i << endl; i++;
    }

    return 0;
}
