#include<iostream>
#include<Windows.h>
using namespace std;

#define tab "\t"

//#define CLOCK
#define MULTIPLICATION_TABLE

void main()
{
	setlocale(LC_ALL, "");

#ifdef CLOCK
	int h = 24;
	int m = 60;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < m; j++)
		{
			system("CLS");
			if (i < 10)cout << 0;
			cout << i << ":";
			if (j < 10)cout << 0;
			cout << j << endl;
			Sleep(1000);
		}
	}
#endif // CLOCK

#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= n; j++)
		{
			/*if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i*j < 10)cout << " ";
			if (i*j < 100)cout << " ";
			cout << i * j << endl;*/
			cout << tab;
			cout.width(2);
			cout << i << " * ";
			cout.width(2);
			cout << j << " = ";
			cout.width(3);
			cout << i * j << endl;
		}
	}
#endif // MULTIPLICATION_TABLE

}