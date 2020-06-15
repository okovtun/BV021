#include<iostream>
using namespace std;

#define delimiter "\n--------------------------------------------------\n"

void main()
{
	/*cout << false << endl;
	short a = 70000;
	cout << a << endl;*/

	cout << "short:\n";
	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "\t" << SHRT_MAX << endl;
	cout << 0 << "\t" << USHRT_MAX << endl;
	//short - shrt
	cout << delimiter;

	cout << "int:\n";
	cout << sizeof(int) << endl;
	cout << INT_MIN << "\t" << INT_MAX << endl;
	cout << 0 <<"\t\t"<< UINT_MAX << endl;
	//121
	//1221
	//12321
}