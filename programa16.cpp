#include <iostream>
using namespace std;
//mostrar los numeros desde 1 hasta 5
int main()
{
    int i=6;
    cout<<"do-while"<<endl;
    do
    {
        cout<<i<<endl;
        i++;
    }while(i<=5);
    cout<<"while"<<endl;
    i=6;
    while(i<=5)
    {
        cout<<i<<endl;
        i++;
    }
    return 0;
}
