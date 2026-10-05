#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double xp, xk, dx, eps;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "--------------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x"
        << " |" << setw(12) << "ln(x)"
        << " |" << setw(14) << "S (ряд)"
        << " |" << setw(8) << "n" << " |" << endl;
    cout << "--------------------------------------------------------" << endl;

    double x = xp;
    while (x <= xk + dx / 2.0) {
        if (x <= 0 || x > 2) {
            cout << "|" << setw(7) << setprecision(2) << x
                << " |" << setw(38) << "x поза областю визначення (0; 2]" << " |" << endl;
        }
        else {
            int n = 0;
            double a = x - 1.0; // перший доданок (n = 0)
            double S = a;       // початкова сума
            double R;           // коефіцієнт рекурентності

            while (abs(a) >= eps) {
                n++;
                R = -(x - 1.0) * n / (n + 1.0);
                a *= R;
                S += a;
            }

            cout << "|" << setw(7) << setprecision(2) << x
                << " |" << setw(12) << setprecision(6) << log(x)
                << " |" << setw(14) << setprecision(6) << S
                << " |" << setw(8) << n + 1 << " |" << endl;
        }
        x += dx;
    }

    cout << "--------------------------------------------------------" << endl;

    return 0;
}
