#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите ширину квадрата: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int l = 0; l < n; l++)
		{
			for (int j = 0; j < n; j++)
			{
				if ((i + j) % 2 == 0)
				{
					for (int j = 0; j < n; j++)
					{
						cout << "  ";
					}
				}
				else
				{
					for (int j = 0; j < n; j++)
					{
						cout << "+ ";
					}
				}
			}
			cout << endl;
		}
	}
}