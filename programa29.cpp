#include <iostream>
#include <string>
using namespace std;
/**
Escribir un programa para leer un numero entero,un
numero real y un numero entero usando validacion.
item Precio     Cant
1       1.5     2
2       2.8     4
3       5       3
4       4.1     4
*/
int leerNumero()
{
    int i,a;
    string dato;
    do{
        cin>>dato;
        for(i=0;i<dato.length();i++)
            if(!isdigit(dato[i]))
                break;
        if(i==dato.length())
            a=stoi(dato);
        else
            cout<<"Error en el valor introducido, intente otra vez:";
    }while(i!=dato.length());
    return a;
}
int main()
{
    int a,c;
    double b;
    string dato;
    cout<<"Introduzca un numero entero,real,entero:";
    int i;
    a=leerEntero();
    do{
        cin>>dato;
        for(i=0;i<dato.length();i++)
            if(!isdigit(dato[i])&&dato[i]!='.')
                break;
        if(i==dato.length())
            b=stod(dato);
        else
            cout<<"Error en el valor introducido, intente otra vez:";
    }while(i!=dato.length());
    c=leerEntero();
    cout<<"los valores ingresados son:"<<a<<" "<<b<<" "<<c;
    return 0;
}
