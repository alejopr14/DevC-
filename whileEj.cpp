#include <iostream>
using namespace std;
int main()
{
int n,num,c=0,suma=0;
while (c<=9)
{
cout<<"ingresar numero: ";
cin>>num;
suma+=num;
c=c+1;
}
cout<<"La suma de los numeros es\n "<<suma;
cout<<"\n el promedio es :\n "<<suma/c;
}
