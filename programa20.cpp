#include <iostream>
#include <cmath>
/*se tienen 3 puntos en el plano
y se quiere hallar la menor distancia entre
ellos
Ej. Entrada     Salida
0 0 0 3 4 0     la menor distancia es 3
*/
using namespace std;
int main()
{
    int puntos=3;
    int x[puntos],y[puntos];
    for(int i=0;i<puntos;i++)
        cin>>x[i]>>y[i];
    double distancias[puntos];
    for(int i=0;i<puntos;i++)
    {
        double d=sqrt(pow(x[(i+1)%puntos]-x[i],2)
                  +pow(y[(i+1)%puntos]-y[i],2));
        distancias[i]=d;
    }
    double menor=distancias[0];
    for(int i=0;i<puntos;i++)
        if(menor>distancias[i])
            menor=distancias[i];
    cout<<"la menor distancia es:"<<menor;
    return 0;
}
