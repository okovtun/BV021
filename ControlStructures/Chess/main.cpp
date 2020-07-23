#include<iostream>
using namespace std;

#define FIRST_CONNER	(char)218
#define SECOND_CONNER	(char)191
#define THIRD_CONNER	(char)192
#define FOURTH_CONNER	(char)217
#define HORIZ_LINE		(char)196
#define VERT_LINE		(char)179
#define WHITE_BOX		(char)219

void main()
{
	setlocale(LC_ALL, "");

	//for (unsigned char i = 177; i < 225; i++)cout << (int)i << "\t" << i << endl;
	int n = 5;
	cout << "¬ведите размер доски: "; cin >> n;
	n++;

	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			//cout << "* ";
			if (i == 0 && j == 0)cout << FIRST_CONNER;
			else if (i == 0 && j == n)cout << SECOND_CONNER;
			else if (i == n && j == 0)cout << THIRD_CONNER;
			else if (i == n && j == n)cout << FOURTH_CONNER;
			else if (i == 0 || i == n)cout << HORIZ_LINE << HORIZ_LINE;
			else if (j == 0 || j == n)cout << VERT_LINE;
			else (i + j) % 2 == 0 ? cout << WHITE_BOX << WHITE_BOX : cout << "  ";
			//else if ((i + j) % 2 == 0) cout << WHITE_BOX << WHITE_BOX; else cout << "  ";
		}
		cout << endl;
	}
}