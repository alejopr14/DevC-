#include <iostream>
using namespace std;
int main()
{
	
	int numero1, numero2, inicio, fin;
	
    cout<<" Introduzca el primer numero: "; cin>>numero1;
	cout<<" Introduzca el segundo numero: "; cin>>numero2;
    
    cout << "\nNumeros entre " << numero1 << " y " << numero2 << ":\n";

if (numero1 < numero2) {
        inicio = numero1;
        fin = numero2;
    } else {
        inicio = numero2;
        fin = numero1;
    }

    cout << "\nNumeros entre " << inicio << " y " << fin << ":\n";


    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) {
            cout << i << " es par" << endl;
        } else {
            cout << i << " es impar" << endl;
        }
    }

    return 0;
}
