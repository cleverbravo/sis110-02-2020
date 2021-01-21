#include <iostream>
#include <algorithm>
/**
leer un nombre por teclado y mostrarlo
al revez
Entrada     Salida
maria       airam
pepe        epep
*/
using namespace std;
int main()
{
    string nombre;
    cin>>nombre;
    /*for(int i=0;i<nombre.length();i++)
        //cout<<(int)nombre[i]<<endl;
        cout<<nombre[nombre.length()-i-1];*/
    reverse(nombre.begin(),nombre.end());
    cout<<nombre;
    return 0;
}
