// Lab_03_4.cpp
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 18
#include <iostream>
using namespace std;

int main() {
	double x, y, R;
	cout << "x="; cin >> x;
	cout << "y="; cin >> y;
	cout << "R="; cin >> R;

	if (((x - R) * (x - R) + (y - R) * (y - R) <= R * R && y <= x )|| ((x + R) * (x + R) + (y + R) * (y + R) <= R * R && y <= x))
	cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}
