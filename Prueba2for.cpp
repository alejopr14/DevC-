#include <iostream>
using namespace std;
int main()
{
	
	int numero;
	
    cout<<" Introduzca el primer numero: "; cin>>numero;

if (numero <= 0) {
        cout << "Ingresa un numero mayor a 0." << endl;
    } else {
        cout << "Los divisores de " << numero << " son: ";
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
