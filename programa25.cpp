#include <iostream>
#include <iomanip>
using namespace std;
/**
Escribir un programa para leer un numero entero por teclado
y mostrar por pantalla la siguiente figura:
*
**
***
Ej. Entrada
3
4
Salida
*
**
***

*
**
***
****
*/
int main()
{
    int n;
    cin>>n;
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
            cout<<"*";
        cout<<endl;
    }*/
    /*for(int i=0;i<n;i++)
    {
        string puntos(i+1,'*');
        cout<<puntos<<endl;
        //cout<<string(i+1,'*')<<endl;
    }*/
    for(int i=0;i<n;i++)
        cout<<setfill('*')<<setw(i+1)<<""<<endl;
    return 0;
}
