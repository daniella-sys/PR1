#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double R1, R2, x_poch, x_kin, dx;

    cout << "Введіть параметри функції:" << endl;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << "x_поч = "; cin >> x_poch;
    cout << "x_кін = "; cin >> x_kin;
    cout << "dx = "; cin >> dx;

    cout << "\n----------------------------------------" << endl;
    cout << "|        ТАБЛИЦЯ ЗНАЧЕНЬ ФУНКЦІЇ       |" << endl;
    cout << "----------------------------------------" << endl;
    cout << "|        x        |          y         |" << endl;
    cout << "----------------------------------------" << endl;

    for (double x = x_poch; x <= x_kin + dx / 2; x += dx) {
        double y;
        bool undefined = false;

        if (x <= -1 - 2 * R1) {
            y = -R1 * (x + 2 * R1);
        } 
        else if (x > -1 - 2 * R1 && x <= -R1) {
            double radical = R1 * R1 - pow(x + R1, 2);
            if (radical >= 0) {
                y = sqrt(radical);
            } else {
                undefined = true;
            }
        } 
        else if (x > -R1 && x <= 2 * R2) {
            double radical = R2 * R2 - pow(x - R2, 2);
            if (radical >= 0) {
                y = -1 - sqrt(radical);
            } else {
                undefined = true;
            }
        } 
        else if (x > 2 * R2 && x <= 6) {
            if (6 - 2 * R2 != 0) {
                y = -(x - 2 * R2) / (6 - 2 * R2);
            } else {
                undefined = true;
            }
        } 
        else {
            y = -1;
        }

        cout << "| " << setw(15) << fixed << setprecision(3) << x << " | ";
        if (!undefined) {
            cout << setw(16) << fixed << setprecision(4) << y << " |" << endl;
        } else {
            cout << setw(16) << "не визначено" << " |" << endl;
        }
    }

    cout << "----------------------------------------" << endl;

    return 0;
}
