#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	/*while (Condition)
	{

	}

	do 
	{
	
	} while (Condition);*/

	char key;
	do
	{
		key = getch();//ASCII-код
		cout << (int)key << "\t" << key << endl;
	} while (true);
}