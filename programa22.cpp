#include <iostream>
#include <algorithm>
using namespace std;
/**
escribir un programa para leer 20 numeros por teclado
y mostrar los 3 primeros mayores
Ej. Entrada
5 6 9 1 5 0 -1 4 2 8 7 8 9 5 4 11 100 -2 -9 -7
Salida
100 11 9
*/
int main()
{
    double x[20];
    for(int i=0;i<20;i++)
        cin>>x[i];
    sort(x,x+20);
    for(int i=0;i<20;i++)
        cout<<x[i]<<" ";
    cout<<endl<<x[19]<<" "<<x[18]<<" "<<x[17];
    return 0;
}
