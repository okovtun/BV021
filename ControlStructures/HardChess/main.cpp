#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������ �����: "; cin >> n;
	//for (int k = 0; k < n; k++)
	//{
	//	for (int i = 0; i < n; i++)
	//	{
	//		for (int j = 0; j < n; j++)
	//		{
	//			/*if ((k + j) % 2 == 0)
	//			{
	//				for (int l = 0; l < n; l++)
	//				{
	//					cout << "* ";
	//				}
	//				for (int l = 0; l < n; l++)
	//				{
	//					cout << "  ";
	//				}
	//			}
	//			else
	//			{
	//				for (int l = 0; l < n; l++)
	//				{
	//					cout << "  ";
	//				}
	//				for (int l = 0; l < n; l++)
	//				{
	//					cout << "* ";
	//				}
	//			}*/
	//			for (int l = 0; l < n; l++)
	//			{
	//				if ((k + j) % 2 == 0)cout << "* ";
	//				else cout << "  ";
	//			}
	//		}
	//		cout << endl;
	//	}
	//}

	for (int i = 0; i < n; i++)//���������� ������� ��������� � �����
	{
		for (int j = 0; j <= n; j++)//���������� ����� � ������� ��������
		{
			for (int k = 0; k < n; k++)//���������� ������� ��������� � ������
			{
				for (int l = 0; l < n; l++)//���������� �������� � ����� ������
				{
					//if ((i + k) % 2 == 0)cout << "* ";	else cout << "  ";
					//((i + k) % 2 == 0)?cout << "* " : cout << "  ";
					cout << ((i + k) % 2 == 0 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}

	//Variable
	int var1;
	int var2;
	int var3;

	//Array:
	int arr[100];
	cout << sizeof(arr) << endl;
}