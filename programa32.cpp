#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
/**
escribir un programa para resolver una ecuacion de segundo
grado
ax^2+bx+c=0
*/
double ec1(double b,double c)
{
    if(b!=0)
        return -c/b;
    else
    {
        cout<<"Error no es una ecuacion valida";
        exit(0);//finalizar el programa
    }
}
void ec2(double a,double b,double c,double &x1,double &x2,bool &i)
{
    i=false;
    double d=b*b-4*a*c;
    if(a==0)
    {
        x1=x2=ec1(b,c);
        return;//saliendo de la funcion
    }
    if(d<0)
    {
        i=true;
        x1=(-b)/(2*a);
        x2=(sqrt(-d))/(2*a);
    }
    else
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
    }
}

int main()
{
    double a,b,c,x1,x2;
    bool imaginario;
    cin>>a>>b>>c;
    ec2(a,b,c,x1,x2,imaginario);
    if(imaginario)
    {
        cout<<"x1="<<x1<<"+"<<x2<<"i"<<endl;
        cout<<"x2="<<x1<<"-"<<x2<<"i"<<endl;
    }
    else
    {
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }
    return 0;
}
