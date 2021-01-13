#include <iostream>
using namespace std;
/*
Leer dos números (a,b) por teclado y mostrar
por pantalla la division del
primero entre el segundo
Ej.
Entrada     Salida
8  4        2
2  1        2
1  0        Error de division por cero
0  1        0
*/
int main()
{
    double x,a,b;
    cin>>a>>b;
    /*if(b==0)
        cout<<"Error de division por cero";
    else
        cout<<a/b;*/
    /*switch((int)(b*1000000))
    {
        case 0:
            cout<<"Error de division por cero";
            break;
        default:
            cout<<a/b;
    }*/
    string r=b==0?"Error de division por cero":""+to_string(a/b);
    cout<<r;
    return 0;
}
