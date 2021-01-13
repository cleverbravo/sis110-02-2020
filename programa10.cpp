#include <iostream>
using namespace std;/*
p|q|p && q
V|V|  V
V|F|  F
F|V|  F
F|F|  F
p|q|p||q
V|V| V
V|F| V
F|V| V
F|F| F
p| !p
F| V
V| F*/
int main()
{
    int a=4,b=15,c=-5;
    switch(b-a*3)
    {
        case 1:cout<<"es 1";
            cout<<"\notro mensaje";
            cout<<"\notro mensaje mas";
            break;
        case 2:cout<<"es 2";
            break;
        case 3:cout<<"es 3";
            break;
        case 4:cout<<"es 4";
            break;
        //etc...
        default:
            cout<<"es un valor distinto de:1,2,3,4";

    }
    return 0;
}
