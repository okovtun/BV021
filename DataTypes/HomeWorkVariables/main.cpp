#include<iostream>
using namespace std;

//#define TASK_1
//define - определить
//definition - определение

int function1;//Объявление переменной
int function2();//Объявление функции.
int sum(int a, int b)
{
	int res = a + b;
	return res;
}

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined TASK_1
	//ЕСЛИ ОПРЕДЕЛЕНО TASK_1, то нижеследующий код будет "виден" компилятору.
	double money;
	cout << "Введите сумму: "; cin >> money;
	cout << money << endl;
	int grn = money;
	int cop = (money - grn) * 100;
	cout << grn << " грн.\t" << cop << " коп." << endl;;
#endif

	//cout << sum(2, 3) << endl;;

	cout << typeid('+').name() << endl;	//Символьная константа
	cout << "+" << endl;	//Строковая константа
}