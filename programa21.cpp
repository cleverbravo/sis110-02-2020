#include <iostream>
/**
leer las notas de dos examenes parciales de 5 estudiantes
mostrar por pantalla la calificacion de cada uno.
Ej Entrada      Salida
51  64          57.5
10  23          16.5
51  51          51
0   0           0
14  90          52
*/
using namespace std;
int main()
{
    int m[5][2];
    for(int i=0;i<5;i++)
        for(int j=0;j<2;j++)
            cin>>m[i][j];
    for(int i=0;i<5;i++)
    {
        double total=0;
        for(int j=0;j<2;j++)
            total+=m[i][j];
        cout<<total/2<<endl;
    }

    return 0;
}
