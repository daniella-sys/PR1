// Lab_03_2.cpp
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 18

#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double a, b, c, x; //вхідні параметри
	double F; //результат обчислення
	cout << "Введіть а="; cin >> a;
	cout << "Введіть b="; cin >> b;
	cout << "Введіть с="; cin >> c;
	cout << "Введіть х="; cin >> x;

	//1 спосіб розгалуження в скороченій формі
	if (x < 0 && b != 0)
		F = (a * pow(x, 2)) - (b * pow(x, 2));
	if (x > 0 && b == 0)
		F = (x - a) / (x - c);
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = (x + 5) / (c * (x - 10));

	cout endl;
	cout << "1)F=" << F << endl;

	//2 спосіб розгалуження в повній формі
	if (x < 0 && b != 0) {
		F = (a * pow(x, 2)) - (b * pow(x, 2));
	}
	else if (x > 0 && b == 0) {
		F = (x - a) / (x - c);
	}
	else {
		F = (x + 5) / (c * (x - 10));
	}

	cout endl;
	cout << "2)F=" << F << endl;
	return 0;

}
