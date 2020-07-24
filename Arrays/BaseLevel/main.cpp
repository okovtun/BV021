#include<iostream>
using namespace std;

#define tab "\t"

#define DATA_TYPE double

void main()
{
	setlocale(LC_ALL, "");

	//		Default values:
	cout << int() << endl;
	cout << float() << endl;

	const int n = 5;
	DATA_TYPE arr[n] = { 5 };
	cout << "Введите зачения элементов: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//Вывод массива на экран: 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Вычисление суммы элементов массива:
	DATA_TYPE sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / n << endl;

	//Поиск минимального и максимального значения в массиве:
	DATA_TYPE min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}