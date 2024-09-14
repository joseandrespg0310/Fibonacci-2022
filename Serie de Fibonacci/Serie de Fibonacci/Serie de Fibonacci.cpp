// Serie de Fibonacci.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()// 1,1,2,3,5,8
{
 /*Serie de Fibonacci */
	int N, x = 0, y = 1, z = 1;
	cout << "Cuantos numeros desea imprimir ? "; cin >> N;
	cout << "1 ";
	for (int i=1;i<N ; i++) 
	{
		z=x + y;
		cout << z << " ";//1,z=2
		x = y;//x=1,X=1
		y = z;//y=1,Y=2
	}

	return 0;
}


