#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;	//„исло, вводимое с клавиатуры
	int reverse = 0;	//¬веденное число, записанное наоборот (задом наперед).
	cout << "¬ведите число: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
}