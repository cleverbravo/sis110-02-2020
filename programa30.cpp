#include <iostream>
using namespace std;
/**
escribir un programa para mostrar por pantalla
mensajes encerrados entre un simbolo introducido por
teclado
Input       Salida
sistemas *  ************
            * sistemas *
            ************
sistemas #  ############
            # sistemas #
            ############

*/
void mostrarEnCuadro(string cad,char s)
{
    string borde(cad.length()+4,s);
    cout<<borde<<endl;
    cout<<s<<' '<<cad<<' '<<s<<endl;
    cout<<borde<<endl;
}
int main()
{
    string cadena;
    char simbolo;
    cin>>cadena>>simbolo;
    string nombre="clever",u="uatf";
    mostrarEnCuadro(cadena,simbolo);
    mostrarEnCuadro(nombre,simbolo);
    mostrarEnCuadro(u,simbolo);
    return 0;
}
