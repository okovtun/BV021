#include<iostream>
#include<ctime>
using namespace std;

#define tab "\t"

void main(void)
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	//Заполняем массив случайными числами:
	cout << time(NULL) << endl;
	srand(time(NULL));

	//	int rand(void);
	int minRand, maxRand;
	cout << "Введите минимальное случайное число: "; cin >> minRand;
	cout << "Введите максимальное случайное число: "; cin >> maxRand;
	if (minRand > maxRand)
	{
		//Поменять их местами
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRand-minRand)+minRand;
	}

	//Выводим массив на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}