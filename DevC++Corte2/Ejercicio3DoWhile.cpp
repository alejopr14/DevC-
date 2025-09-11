# include "iostream"
using namespace std;
int main (){
system ("color f0");
int contar = 0;
float x,promedio, suma = 0;

	cout<<"Ingrese la cantidad de numeros que desee leer y finalice con un 0:\n"<<endl;
do {
cout<<("x= ");
cin>>x;
suma=suma+x;
contar++;}
while (x != 0);
suma=suma+(contar=0);

cout<<"\nLa suma de los numeros ingresados son: "<<suma<<endl;
system("pause");
}
