#include <iostream>
#include <algorithm>
using namespace std;
/**
escribir un programa para leer 20 numeros por teclado
y luego buscar por un valor introducido por teclado
Ej. Entrada
5 6 9 1 5 0 -1 4 2 8 7 8 9 5 4 11 100 -2 -9 -7
99

5 6 9 1 5 0 -1 4 2 8 7 8 9 5 4 11 100 -2 -9 -7
100
Salida
99 no esta en la lista
100 se encontro en la lista
*/
int main()
{
    double x[20],buscar;
    for(int i=0;i<20;i++)
        cin>>x[i];
    cout<<"introduzca el numero que desea buscar:";
    cin>>buscar;
    int i=0;
    for(i=0;i<20;i++)
        if(buscar==x[i])
        {
            cout<<x[i]<<" se encontro en la lista";
            break;
        }

    if(i==20)
        cout<<buscar<<" no esta en la lista";



    return 0;
}
