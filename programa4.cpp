#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double h,a,b,ma,mb,mh;
    cin>>h>>a>>b;//2.- Leer h,a,b
    ma=a/2;//3.- ma=a/2
    mb=b/2;//4.- mb=b/2
    mh=sqrt(ma*ma+mb*mb);//5.- mh=sqrt(ma*ma + mb*mb)
    if(ma==mb&&mb==mh&&mh==ma)//6.- Si ma es igual a mb y mb es igual a mh y mh es igual a ma
        cout<<"Equilatero";//6.1.- Mostrar el mensaje "Equilatero"
    else//7.-Sino
        cout<<"No es equilatero";//7.1.- Mostrar el Mensaje "no es equilatero
    return 0;
}





