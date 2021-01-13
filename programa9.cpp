/*
Escribir un programa para mostrar por pantalla
la raiz cuadrada de un real introducido por
teclado.
1.-Inicio
2.-Leer a
3.-raiz=sqrt(a) // square root
4.-mostrar "raiz cuadrada=" raiz
5.-Fin
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,raiz;
    otravez:
    cin>>a;
    if(a<0)
    {
        cout<<"error, intente de nuevo.";
        goto otravez;
    }
    else
    {
        raiz=sqrt(a);
        cout<<"raiz cuadrada="<<raiz;
    }
    return 0;
}
