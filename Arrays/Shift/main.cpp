#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//  1,	2,	3,	4,	5,	6,	7,	8,	9,	10
	//  8,	9,	10,	1,	2,	3,	4,	5,	6,	7
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	int shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> shift;
}