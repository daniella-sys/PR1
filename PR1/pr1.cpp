// Lab_02.cpp
// Опольська Богдана 
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 17

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double m;  // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу

    cout << "m = ";
    cin >> m; //команда зупиняє виконання програми і чекає поки я введу число 

    z1 = sqrt(pow(3 * m + 2, 2) - 24 * m) / (3 * sqrt(m) - 2 / sqrt(m));
    z2 = sqrt(m);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get(); //затримка екрана очікування
    return 0; //завершення програми 
}
