#include<iostream>
using namespace std;

//#define ASCII
//#define SQUARE
//#define TRIANGLE_1
#define TRIANGLE_2

void main()
{
	//setlocale(LC_ALL, "");

#ifdef ASCII
	/*for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;*/

#endif // ASCII

	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

	/*for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}*/

	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)	cout << "  ";
		for (int j = i; j < n; j++)	cout << "* ";
		cout << endl;
	}*/

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)cout << " ";		cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " ";		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
}