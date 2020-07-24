#include<iostream>
using namespace std;

#define tab "\t"

#define DATA_TYPE double

void main()
{
	setlocale(LC_ALL, "");

	//		Default values:
	cout << int() << endl;
	cout << float() << endl;

	const int n = 5;
	DATA_TYPE arr[n] = { 5 };
	cout << "������� ������� ���������: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//����� ������� �� �����: 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//����� ������� �� ����� � �������� �������:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//���������� ����� ��������� �������:
	DATA_TYPE sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������� �������������� ��������� �������: " << (double)sum / n << endl;

	//����� ������������ � ������������� �������� � �������:
	DATA_TYPE min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;
}