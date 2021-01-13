/*
Un niño de escuela tiene tarea de sumas
debe realizar 5 sumas de dos números,
y requiere verificar sus respuestas con
un programa.
1.-Inicio
2.-Leer a,b, c,d, e,f, g,h, i,j
3.-s1=a+b
4.-s2=c+d
5.-s3=e+f
6.-s4=g+h
7.-s5=i+j
8.-mostrar "resultados son:" s1,s2,s3,s4,s5
9.-Fin
*/
#include <iostream>
using namespace std;
int main()
{//1.-Inicio
    double a,b,c,d,e,f,g,h,i,j,s1,s2,s3,s4,s5;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
    s1=a+b;
    s2=c+d;
    s3=e+f;
    s4=g+h;
    s5=i+j;
    cout<<"los resultados son:\n";
    cout<<s1<<endl<<s2<<endl<<s3;
    cout<<endl<<s4<<endl<<s5;
    return 0;
}//9.-Fin
