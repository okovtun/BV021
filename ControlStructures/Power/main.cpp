#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double a;	//Основание степени
	int n;	//Показатель степени
	double N = 1;//Степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
}