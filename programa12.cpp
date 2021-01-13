#include <iostream>
using namespace std;
/*
Leer un número entero por teclado y mostrar
por pantalla si es par o impar
Entrada     Salida
2           Par
5           Impar
8           Par
0           Par
*/
int main()
{
    int numero;
	cout<< "digite un numero:";
	cin>>numero;

	/*if (numero%2==0){
		cout<< "el numero es par";
	}
	else{
		cout<<"El numero es impar";
	}*/
	/*switch(numero%2)
	{
	    case 0:cout<< "el numero es par";break;
	    case 1:cout<< "el numero es impar";break;
	}*/
	cout<<(numero%2==0?"par":"impar");
    return 0;
}
