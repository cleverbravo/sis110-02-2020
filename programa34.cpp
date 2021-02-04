#include <iostream>
using namespace std;
/**
Escribir un programa para realizar las operaciones
de suma,resta,multiplicacion,division y
simplificacion de fracciones;
Input       Output
3 4 + 5 8   11/8
1 2 - 1 2   0
1 3 * 1 4   1/12
1 3 / 1 4   4/3
*/
struct Fraccion
{
    int n,d;
    void leer()
    {
        cin>>n>>d;
    }
    void mostrar()
    {
        if(n==0)
            cout<<0;
        else
            cout<<n<<"/"<<d;
    }
    Fraccion operator+(Fraccion b)
    {
        return sumar(b);
    }
    Fraccion sumar(Fraccion b)
    {
        Fraccion r;
        r.d=d*b.d;
        r.n=r.d/d*n+r.d/b.d*b.n;
        r.simplificar();
        return r;
    }
    Fraccion restar(Fraccion b)
    {
        b.n=-b.n;
        return sumar(b);
    }
    Fraccion multiplicar(Fraccion b)
    {
        Fraccion r;
        r.n=n*b.n;
        r.d=d*b.d;
        r.simplificar();
        return r;
    }
    Fraccion dividir(Fraccion b)
    {
        Fraccion r;
        r.n=n*b.d;
        r.d=d*b.n;
        r.simplificar();
        return r;
    }
    void simplificar()
    {
        int a=n,b=d,r;
        while(b!=0)
        {
            r=a%b;
            a=b;
            b=r;
        }
        n/=a;//n=n/a
        d/=a;//d=d/a
    }
};
/*Fraccion sumar(Fraccion a,Fraccion b)
{
    Fraccion r;
    r.d=a.d*b.d;
    r.n=r.d/a.d*a.n+r.d/b.d*b.n;
    return r;
}
void leer(Fraccion &f)
{
    cin>>f.n>>f.d;
}
void mostrar(Fraccion &f)
{
    cout<<f.n<<"/"<<f.d;
}*/
int main()
{
    Fraccion a,b;
    //leer(a);
    //leer(b);
    char op;
    a.leer();
    cin>>op;
    b.leer();
    switch(op)
    {
        case '+':
            (a+b).mostrar();
            break;
        case '-':
            a.restar(b).mostrar();
            break;
        case '*':
            a.multiplicar(b).mostrar();
            break;
        case '/':
            /*Fraccion r=a.dividir(b);
            r.mostrar();*/
            a.dividir(b).mostrar();
            break;
    }
    return 0;
}
