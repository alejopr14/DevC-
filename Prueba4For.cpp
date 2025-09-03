#include <iostream>
using namespace std;

int main() {
    cout << "Multiplos de 2 y 3 entre 0 y 100:" << endl;

    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0 && i % 3 == 0) {
            cout << i << " (multiplo de 2 y 3)" << endl;
        }
        else if (i % 2 == 0) {
            cout << i << " (multiplo de 2)" << endl;
        }
        else if (i % 3 == 0) {
            cout << i << " (multiplo de 3)" << endl;
        }
    }

    return 0;
}
