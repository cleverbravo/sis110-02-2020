#include <iostream>
using namespace std;
//mostrar los numeros desde 1 hasta 5
int main()
{
    int i=1;
    otravez:
    cout<<i<<endl;
    i++;
    if(i<=5)
        goto otravez;
    return 0;
}
