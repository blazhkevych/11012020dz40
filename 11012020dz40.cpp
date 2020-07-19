/*
* У 	дворника почасовая оплата труда.Пользователь вводит ставку за час и 	желаемую сумму зарплаты.Посчитать, сколько часов надо отработать дворнику.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double a, b, c;
	cout << "Введите з / п за час: " << endl;
	cin >> a;
	cout << "Введите желаемую сумму зп: " << endl;
	cin >> b;
	c = b / a;
	cout << c << endl;
	return 0;
}
