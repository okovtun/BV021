#include <iostream>
using namespace std;

#define tab "\t\t"
#define tab2 "\t   "
#define delimiter "___________________________________________________________________"

#define CHESS_1
//#define CHESS_2

#define WHITE_BOX "* "
#define BLACK_BOX "  "

void main()
{
	setlocale(LC_ALL, "");

	int numb;
	cout << tab << "Вывод шахмотной доски" << endl << delimiter << "\n\n";
	cout << tab2 << "    Введите размер доски: ";
	cin >> numb;
	cout << "\n\n";

#ifdef CHESS_1

	for (int i = 1; i <= numb; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = 1; j <= numb; j++)
			{
				for (int ii = 1; ii <= numb; ii++)
				{
					if ((ii) % 2 != 0)
					{
						for (int jj = 0; jj < numb; jj++) cout << WHITE_BOX;
					}
					else if ((ii) % 2 == 0)
					{
						for (int jj = 0; jj < numb; jj++) cout << BLACK_BOX;
					}
				}
				cout << endl;
			}
		}
		if (i % 2 == 0)
		{
			for (int j = 1; j <= numb; j++)
			{
				for (int ii = 1; ii <= numb; ii++)
				{
					if ((ii) % 2 != 0)
					{
						for (int jj = 0; jj < numb; jj++) cout << BLACK_BOX;
					}
					else if ((ii) % 2 == 0)
					{
						for (int jj = 0; jj < numb; jj++) cout << WHITE_BOX;
					}
				}
				cout << endl;
			}
		}
	}

#endif // CHESS_1

}