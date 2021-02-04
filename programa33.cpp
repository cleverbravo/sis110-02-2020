/**
estructuras
*/
#include <iostream>
using namespace std;
struct Estudiante
{
    string nombre,direcion;
    int parciales[2],exfinal,practicas;
};
int main()
{
    Estudiante e;
    cout<<"introduzca el nombre:";
    cin>>e.nombre;
    cout<<"introduzca la direccion:";
    cin>>e.direcion;
    cout<<"introduzca los dos parciales,final y practicas:";
    cin>>e.parciales[0]>>e.parciales[1]
            >>e.exfinal>>e.practicas;
    cout<<e.nombre<<" vive en "<<e.direcion;
    int nf=(e.parciales[0]+e.parciales[1])/2*.4+
            e.exfinal*.4+e.practicas*.2;
    cout<<" su nota final es:"<<nf;
    return 0;
}
