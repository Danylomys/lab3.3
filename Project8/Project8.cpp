// Lab_03_3.cpp
// < Мисишин Данило >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 17

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -1 - R)
		y = 1;
	else
		if (-1 - R < x && x <= -1)
			y = -sqrt(R * R - pow(x + 1, 2));
		else
			if (-1 < x && x <= 2)
				y = -R;
			else
				y = -R + R / 2 * (x - 2);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}