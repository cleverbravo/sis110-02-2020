#include <iostream>
using namespace std;
/*
Leer un número entero por teclado
y mostrar por pantalla si es divisible
entre: 1, 2, 3, 4 o 5.
Entrada     Salida
5           1,5
25          1,5
15          1,3,5
20          1,2,4,5
*/
int main()
{
    int n;
    cin>>n;
    cout<<"1";
    if(n%2==0)
        cout<<",2";
    if(n%3==0)
        cout<<",3";
    if(n%4==0)
        cout<<",4";
    if(n%5==0)
        cout<<",5";
    return 0;
}
