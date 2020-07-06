#include<iostream>
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	double a, b;	//„исла, введенные пользователем
	char s;	//Sign - знак операции
	cout << "¬ведите выражение: ";
	/*cin >> a;
	cin >> s;
	cin >> b;*/
	cin >> a >> s >> b;
	/*if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "No operation" << endl;
	}*/

	/*switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default:  cout << "NoOperation" << endl;
	}*/
	//////////////////////////////////////////////////////////////////
}