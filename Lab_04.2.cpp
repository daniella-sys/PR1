#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Оголошуємо змінні для аргументу, меж, кроку та проміжних обчислень
    double x, xp, xk, dx, A, B, y;

    // Зчитуємо початкове x (xp), кінцеве x (xk) та крок (dx)
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    // Налаштовуємо вивід дробових чисел у фіксованому форматі
    cout << fixed;
    
    // Малюємо шапку таблиці
    cout << "-----------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
         << setw(10) << "y" << " |" << endl;
    cout << "-----------------------" << endl;

    x = xp; // Починаємо з x = xp
    while (x <= xk)
    {
        // Спільна частина функції
        A = 13.5 - 2 * x;

        // Визначення B залежно від діапазону x
        if (x <= -1)
        {
            B = exp(0.4 + x); // e^(0.4 + x)
        }
        else
        {
            if (x >= 1)
            {
                B = cos(x) / (1 + pow(sin(x), 2)); // cos(x) / (1 + sin^2(x))
            }
            else
            {
                // Цей блок виконується, коли -1 < x < 1
                B = 1 - pow(sin(x), 2); // 1 - sin^2(x)
            }
        }

        // Обчислюємо підсумкове y
        y = A - B;

        // Виводимо рядок таблиці з форматуванням
        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << y
             << " |" << endl;

        // Переходимо до наступного значення x
        x += dx;
    }

    cout << "-----------------------" << endl;

    return 0;
}
