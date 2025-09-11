# include "iostream"
using namespace std;
int main (){
system ("color f0");
int contar = 0;
float x, promedio, suma = 0;
cout<<"Ingrese numeros para sacarles el promedio para terminar escriba 0:\n"<<endl;
do {
cout<<("x= ");
cin>>x;
suma=suma+x;
contar++;}
while (x != 0);
promedio=suma/(contar-1);
cout<<"\nEl promedio es: "<<promedio<<endl;
system("pause");
}
