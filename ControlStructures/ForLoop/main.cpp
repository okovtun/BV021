/*
------------------------------------------------------



for(start; stop; step)
{
	group-of-statements;
}



------------------------------------------------------
*/
#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	/*while (true)
	{
		cout << "Hello World";
	}*/

	/*for (;;)
	{
		cout << "Hello World";
	}*/
	//cout << UINT_MAX << endl;
	int n;	//	Количество итераций
	double factorial = 1;
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		factorial *= i;
		cout << factorial << ";\n";
	}
	cout << endl;
}