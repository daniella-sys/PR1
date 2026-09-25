// Lab_03_3.cpp
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 18
#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double x, y, R, R1, R2;
	cout << "Введіть x="; cin >> x;
	cout << "Введіть R="; cin >> R;
	cout << "Введіть R1="; cin >> R1;
	cout << "Введіть R2="; cin >> R2;
	//Розгалуження в повній формі
	if (x <= -2R1)
		y = 0;
	else
		if (-2*R1 < x && x <= 0)
			y = R + sqrt(pow(x, 2) + pow(R1, 2));
		else
			if (0 < x && x <= 2*R2)
				y = R - sqrt(pow(x, 2) - pow(R2, 2));
			else
				if (2*R2 < x && x <= 6)
					y = (2*R2 - x) / (6 - 2 * R2);
				else
					y = -1;

	cout << endl;
	cout << "y=" << y << endl;
	return 0;

}
