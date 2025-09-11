#include "iostream"
using namespace std;
int main(){
system ("color f0");
int x,n;
cout<<"dijite numero"<<endl;
cin>>x;
cout<<"cantidad que quiere que se le descuente al numero inicial"<<endl;
cin>>n;
do{ cout<<"resultado"<<x;
cout<<endl;
x=x-n;
}
while (x>=0);
system("PAUSE");
}
