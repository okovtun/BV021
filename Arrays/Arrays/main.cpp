#include<iostream>
using namespace std;

#define tab "\t"

/*

Syntax:
			type name[SIZE];


*/

void main()
{
	setlocale(LC_ALL, "");
	int var;	//variable

	const int SIZE = 3;
	int arr[SIZE];//array
	cout << sizeof(arr) << endl;
	//SIZE - 1;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}