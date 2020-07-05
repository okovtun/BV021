#include<iostream>
using namespace std;

//Вот так будет гораздо удобнее:
//#define TASK1
//#define TASK2
//#define TASK3
//#define TASK4

void main()
{
 
	setlocale(LC_ALL, "");
#if defined TASK1
	double money;
	cout << "Введите число:\n"; cin >> money;
	int grn = money;
	int kop = (money - grn) * 100;
	cout << grn << "грн.";
	cout << kop << "коп.\n";
#endif

#if defined TASK2
	double price_notebook;
	int count_notebook;
	double price_pen;
	int count_pen;
    
	cout << "Вычисление стоимости покупки.\n";
	cout << "Введите данные:\n";
	cout << "Цена тетради:";
	cin>> price_notebook;
	cout << "Количество тетрадей:";
	cin >> count_notebook;
	cout << "Цена карандашей:";
	cin>> price_pen;
	cout << "Количество карандашей:";
	cin>> count_pen;
	double total_price = price_notebook * count_notebook + price_pen * count_pen;
	cout << "Общая стоимость:" << total_price<<"грн\n";
	
#endif

#if defined TASK3
	double PriceNotebook;
	double PriceCover;
	int count_set;

	cout << "Вычисление стоимости покупки.\n";
	cout << "Введите исходные данные:\n";

	cout << "Цена тетради:";
	cin >> PriceNotebook;
	cout << "Цена обложки:";
	cin >> PriceCover;
	cout << "Количество комплектов:";
	cin >> count_set;
	double TotalPrice = (PriceNotebook + PriceCover)*count_set;
	cout << "Общая стоимость:" << TotalPrice << "грн";
#endif

#if defined TASK4
	int distance;
	double fuel_consumption;
	double Fuel_price;

	cout << "Расчет стоимости поездки на дачу и обратно.\n";
	cout << "Введите данные.\n";
	cout << "Расстояние:"; cin >> distance;

	cout << "Цена бензина:"; cin >> fuel_consumption;
	cout << "Расход топлива:"; cin >> Fuel_price;
	double TotalPriceOfDistance = (distance * 2) * (fuel_consumption / 100) * Fuel_price;
	cout << "Поездка на дачу и обратно обойдется в " << TotalPriceOfDistance << "грн";
#endif
}