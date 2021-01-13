/*
Escribir un programa para resolver una
ecuacion de primer grado, a partir de
sus constantes.

ax+b=0
5x-8=0
x=8/5=1.6
x=-b/a
1.-Inicio
2.-Leer a,b
3.-x=-b/a
4.-mostrar "resultado=" x
5.-Fin

*/
#include <iostream>
using namespace std;
int main()
{
    double a,b,x;
    cin>>a>>b;
    x=-b/a;
    cout<<"resultado="<<x;
    return 0;
}
