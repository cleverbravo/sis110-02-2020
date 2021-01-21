#include <iostream>
using namespace std;
/**
Mostrar por pantalla 100 numeros aleatorios(random)
y su promedio.
*/
int main()
{
    int i=0,x;
    while(i<100)
    {
        x=(rand()%100)+1;
        cout<<x<<endl;
        i++;
    }
    return 0;
}
