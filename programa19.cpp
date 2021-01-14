#include <iostream>
using namespace std;
/*mostrar por pantalla los numeros pares
desde 0 hasta 10
*/
int main()
{
    int i=0;
    /*while(i<=10)
    {
        if(i%2==0)
            cout<<i<<endl;
        i++;
    }*/
    /*while(i<=10)
    {
        cout<<i<<endl;
        i=i+2;
    }*/
    /*do
    {
        if(i%2==0)
            cout<<i<<endl;
        i++;
    }while(i<=10);*/
    /*do
    {
        cout<<i<<endl;
        i=i+2;
    }while(i<=10);*/
    /*for(int i=0;i<=10;i++)
        if(i%2==0)
            cout<<i<<endl;*/
    for(int i=0;i<=10;i=i+2)
        cout<<i<<endl;
    return 0;
}
