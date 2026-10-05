#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand((unsigned)time(NULL));

    double R;
    cout << "Введіть радіус R: ";
    cin >> R;

    if (R <= 0) {
        cout << "Помилка: радіус повинен бути більшим за 0!" << endl;
        return 1;
    }

    double x, y;
    // 1 спосіб Ручне введення координат для 10 пострілів
 
    cout << "\n=== 1 СПОСІБ: Введення з клавіатури (10 спроб) ===" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "\nПостріл " << i + 1 << ":" << endl;
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        bool hit1 = ((x - R) * (x - R) + (y - R) * (y - R) <= R * R) && (y <= x);
        bool hit2 = ((x + R) * (x + R) + (y + R) * (y + R) <= R * R) && (y >= x);

        if (hit1 || hit2) {
            cout << "Результат: yes (попадання)" << endl;
        }
        else {
            cout << "Результат: no (промах)" << endl;
        }
    }

    // 2 спосіб Випадкова генерація в інтервалі [-2R; 2R]
    cout << "\n=== 2 СПОСІБ: Випадкові координати в [-2R; 2R] ===" << endl;
    cout << setw(10) << "X" << setw(10) << "Y" << setw(15) << "Результат" << endl;
    cout << "-----------------------------------" << endl;

    double min_val = -2.0 * R;
    double max_val = 2.0 * R;

    for (int i = 0; i < 10; i++) {
        x = min_val + (max_val - min_val) * rand() / RAND_MAX;
        y = min_val + (max_val - min_val) * rand() / RAND_MAX;

        bool hit1 = ((x - R) * (x - R) + (y - R) * (y - R) <= R * R) && (y <= x);
        bool hit2 = ((x + R) * (x + R) + (y + R) * (y + R) <= R * R) && (y >= x);

        cout << setw(10) << fixed << setprecision(4) << x
            << setw(10) << fixed << setprecision(4) << y;

        if (hit1 || hit2) {
            cout << setw(15) << "yes" << endl;
        }
        else {
            cout << setw(15) << "no" << endl;
        }
    }

    return 0;
}
