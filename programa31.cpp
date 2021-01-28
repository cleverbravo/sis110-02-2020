#include <iostream>
using namespace std;
///ambito de una variable
///variables globales
int g=7;
void funcion()
{
    int x=4;
    cout<<"funcion,x="<<x<<endl;
    cout<<"funcion,g="<<g<<endl;
}
int main()
{
    int x=5,z;
    cout<<"main,x="<<x<<endl;
    funcion();
    if(x%2==1)
    {
        z=3;
    }
    cout<<"main,x="<<x<<endl;
    cout<<"main,z="<<z<<endl;
    cout<<"main,g="<<g<<endl;
    return 0;
}
