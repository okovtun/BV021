#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;	//Число, вводимое с клавиатуры
	int reverse = 0;	//Введенное число, записанное наоборот (задом наперед).
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;	//120
		reverse += buffer % 10;
		buffer /= 10;	//123
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Как нибудь в друго раз :-(" << endl;
	}
}