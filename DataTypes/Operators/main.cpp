#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define TERNARY_OPERATOR
//#define ARITHMETICAL_OPERATORS
//#define ASSIGNMENT_OPERATOR	//Оператор присваивания
#define INCREMENT_DECREMENT

void main()
{
	setlocale(LC_ALL, "");
	//5;
	//int a = 2;
	//a;	//Простое выражение, которое не содержит операций.
	//;;;	//Пустое выражение
	//a + 5;	//Простое выражение, оно состоит из одной операции:  '+'.
	//int b = 5 - a;	//Сложное выражение, состоит из двух операций: =, -
	//int c = a + b * 3;	//Приоритет операторов
	//a + b + c;	//Ассоциативность операторов включается когда выражение состоит 
	//			//из операторов с одинаковым приоритетом.
	//			//Ассоциативность бывает "слева на право" и "справа налево".
	//cout << "Hello" << endl;
	////////////////////////////////////////
	//Операторы бывают:
	//Унарные - выполняют действие над одним операндом
	//Бинарные - могут работать только с двумя операндами
	//Тернарные - работают только с тремя операндами
	/*
	------------------------------
	3;
	-3;	//Унарный '-'
	5-3;//Бинарный '-';
	5*3;
	*3;
	------------------------------
	*/
#ifdef TERNARY_OPERATOR
	int t;
	cout << "Введите температуру воздуха: "; cin >> t;
	if (t > 0)
	{
		cout << "На улице тепло!";
	}
	else
	{
		cout << "На улице свежо!";
	}
	if (t > 0)cout << "На улице тепло!"; else cout << "На улице свежо!";
	(t > 0) ? cout << "На улице тепло!" : cout << "На улице свежо!";
	cout << (t > 0 ? "Тепло" : "Свежо") << endl;
#endif // TERNARY_OPERATOR

#if defined ARITHMETICAL_OPERATORS
	//Unary: +, -;
	//Binary:+, -, *, /, %;
	//% - Остаток от деления.
	cout << 23 / 5 << endl;
	cout << 23 % 5 << endl;
	cout << 5 / 23 << endl;
	cout << 5 % 23 << endl;
#endif

#if defined ASSIGNMENT_OPERATOR//	= - присвоить
	/*int a = 2;
	int b = 5 - a;*/

	int a, b, c;
	a = b = c = 0;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
#endif

#ifdef INCREMENT_DECREMENT
	//(++)  
	//int i = 0;
	//++i;	//Prefix increment
	//i++;	//Postfix increment
	//--i;	//Prefix decrement
	//i--;	//Suffix decrement
	////++++++++++++++++++++++++++++++++++++++++++++i;
	//int j = ++i;
	//cout << i << endl;
	//cout << j << endl;

	int i = 3;
	i = ++i + i++;
	cout << (bool)i << endl;
#endif // INCREMENT_DECREMENT

}