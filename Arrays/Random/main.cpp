#include<iostream>
#include<ctime>
using namespace std;

#define tab "\t"

void main(void)
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	//��������� ������ ���������� �������:
	cout << time(NULL) << endl;
	srand(time(NULL));

	//	int rand(void);
	int minRand, maxRand;
	cout << "������� ����������� ��������� �����: "; cin >> minRand;
	cout << "������� ������������ ��������� �����: "; cin >> maxRand;
	if (minRand > maxRand)
	{
		//�������� �� �������
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRand-minRand)+minRand;
	}

	//������� ������ �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}