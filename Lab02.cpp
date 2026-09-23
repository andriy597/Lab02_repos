// Lab02.cpp
// Ковмір Андрій
// Лабораторна робота №2
// Лінійні програми
// Варіант 14

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double alpha; // вхідний параметр(радіани)
	double z1; // результат 1-го виразу
	double z2; // результат 2-го виразу

	cout << "alpha = "; cin >> alpha; // введення з клавіатури

	z1 = (cos(alpha) + sin(alpha)) / (cos(alpha) - sin(alpha));
	z2 = tan(2*alpha) + 1.0 / cos(2*alpha); // sec(2*alpha) = 1/cos(2*alpha)

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();//зупиняє консоль
	return 0;
}
// зміна 1