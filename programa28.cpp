#include <iostream>
#include <sstream>
using namespace std;
/**
Leer una linea (varias palabras) mostrar por pantalla
la cantidad de palabras que contiene.
Input                           Output
maita quispe miguel angel       tiene 4 palabras
navia calderon ivan             tiene 3 palabras
juancito pinto                  tiene 2 palabras

*/
int main()
{
    string cadena;
    getline(cin,cadena);
    /*int espacios=0;
    for(int i=0;i<cadena.length();i++)
        if(cadena[i]==' ')
            espacios++;
    cout<<"tiene "<<espacios+1<<" palabras";*/
    /*int espacios=0;
    for(int i=0;i<cadena.length()-1;i++)
        if(cadena[i]==' '&&cadena[i+1]!=' ')
            espacios++;
    cout<<"tiene "<<espacios+1<<" palabras";*/

    stringstream ss(cadena);
    string aux;
    int cantidad;
    while(ss>>aux)//depositar
    {
        cout<<aux<<endl;
        cantidad++;
    }
    cout<<"tiene "<<cantidad<<" palabras";
    return 0;
}
