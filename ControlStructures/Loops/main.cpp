#include<iostream>
#include<conio.h>
using namespace std;

/*
while - с предусловием
do...while - с постусловием
for - на заданное число итераций
*/

//#define WHILE_BASICS
#define KEYS

#define Escape		27
#define ArrowUp		72
#define ArrowDown	80
#define ArrowLeft	75
#define ArrowRight	77

void main()
{
	setlocale(LC_ALL, "");

	/*while (Condition)
	{

	}

	do
	{

	} while (Condition);*/

	cout << (bool)25 << endl;

#ifdef WHILE_BASICS
	int i = 0;	//счетчик цикла
	//int n;		//количество итераций
	cout << "Введите количество итераций: "; cin >> i;
	while (i--)
	{
		cout << i << " Hello World" << endl;
		//i++;
	}
	cout << i << endl;
#endif // WHILE_BASICS


#ifdef KEYS
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		/*if (key == 'w' || key == 'W' || key == ArrowUp)
		{
			cout << "Вперед" << endl;
		}
		else if (key == 's' || key == 'S' || key == ArrowDown)
		{
			cout << "Назад" << endl;
		}
		else if (key == 'a' || key == 'A' || key == ArrowLeft)
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd' || key == 'D' || key == ArrowRight)
		{
			cout << "Вправо" << endl;
		}
		else if (key == ' ')
		{
			cout << "Прыжок" << endl;
		}
		else if (key == 13)
		{
			cout << "Огонь" << endl;
		}
		else
		{
			if (key != -32 && key != 27) cout << "Error" << endl;
		}*/

		switch (key)
		{
		case 'w':case 'W':case ArrowUp:		cout << "Вперед" << endl; break;
		case 's':case 'S':case ArrowDown:	cout << "Назад" << endl; break;
		case 'a':case 'A':case ArrowLeft:	cout << "Влево" << endl; break;
		case 'd':case 'D':case ArrowRight:	cout << "Вправо" << endl; break;
		
		case ' ': cout << "Прыжок" << endl; break;
		case 13: cout << "Огонь" << endl; break;
		case Escape:cout << "Exit" << endl; break;
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
#endif // KEYS
	/* начало блочного комментария
	
	
	//22 + 348
	double a, b;
	char s;
	cout << "Input expression: ";
	cin >> a >> s >> b;
	cout << a << "\t" << s << "\t" << b << endl;
	int c;
	cin >> c;
	cout << c << endl;
	
	
	конец блочного комментария */
}