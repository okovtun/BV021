#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define delimiter "\n--------------------------------------------------\n"

//#define DATA_TYPES
//#define NAMES
#define CONSTANTS

void main()
{
	setlocale(LC_ALL, "");
#if defined DATA_TYPES
	/*cout << false << endl;
short a = 70000;
cout << a << endl;*/

	cout << "short:\n";
	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "\t" << SHRT_MAX << endl;
	cout << 0 << "\t" << USHRT_MAX << endl;
	//short - shrt
	cout << delimiter;

	cout << "long:\n";
	cout << sizeof(long) << endl;
	cout << LONG_MIN << "\t" << LONG_MAX << endl;
	cout << 0 << "\t\t" << ULONG_MAX << endl;
	cout << delimiter;

	cout << "int:\n";
	cout << sizeof(int) << endl;
	cout << INT_MIN << "\t" << INT_MAX << endl;
	cout << 0 << "\t\t" << UINT_MAX << endl;
	cout << delimiter;
	//121
	//1221
	//12321
	///////////////////////////////////////////////////////////////////////////////////////////////////
	//float  - вещественное число одинарной точности, 4B;
	//double - вещественное число двойной точности, 8B;

	cout << "float:" << endl;
	cout << sizeof(float) << endl;
	cout << FLT_MIN << "\t" << FLT_MAX << endl;
	cout << delimiter;

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "\t" << DBL_MAX << endl;
#endif // DATA_TYPES

#if defined NAMES
	int Player1;
	double price_of_coffee;	//snake_case_style
	//camel case style
	double priceOfCoffe;	//smallCammel
	double PriceOfCoffe;	//БольшойВерблюд
	double weight_of_cocain;
	int a = 2;

	int t = 25;
	{
		int t = 26;
		cout << a << endl;
		cout << t << endl;
	}
	cout << t << endl;
	//Инициализация переменных:
	//Проинициализировать.
	//Инициализация - присвоение начального значения. (Init - начало).
	int b;
	cout << "Введите число: ";
	cin >> b;	//Инициалиция вводом с клавитуры.
	cout << b << endl;

#endif

#if defined CONSTANTS
	int speed = 0;	//переменной значение
	const int MAX_SPEED = 250;//постоянное значение
	//http://cplusplus.com/doc/tutorial/constants/
	cout << 0 << endl;
	cout << sizeof(5.) << "\t";rand
	cout << typeid(5ULL).name() << endl;
	cout << sizeof('+') << endl;//Символьная константа (char)
	cout << sizeof("+") << endl;//Строковая константа
#endif
}