#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(const double x);

int main()
{
    double tp, tk;
    int n;
    cout << "tp = "; cin >> tp;
    cout << "tk = "; cin >> tk;
    cout << "n = "; cin >> n;

    double dt = (tk - tp) / n;
    double t = tp;

    cout << fixed;
    cout << "----------------------------------------" << endl;
    cout << "|      t      |         result         |" << endl;
    cout << "----------------------------------------" << endl;

    while (t <= tk)
    {
        double res = f(1 + 2 * t) + pow(f(1) + 2 * f(2 * t), 2);
        cout << "| " << setw(11) << setprecision(4) << t
             << " | " << setw(22) << setprecision(6) << res << " |" << endl;
        t += dt;
    }

    cout << "----------------------------------------" << endl;
    return 0;
}

double f(const double x)
{
    if (abs(x) >= 1)
    {
        return (pow(sin(x), 2) + sin(pow(x, 2))) / (1 + pow(cos(x), 2));
    }
    else
    {
        double s = 0;
        double a = x;
        s = a;
        for (int n = 1; n <= 5; n++)
        {
            double R = pow(x, 4) / ((4 * n - 3) * (4 * n - 2) * (4 * n - 1) * (4 * n));
            a *= R;
            s += a;
        }
        return (1.0 / (1 + pow(x, 2))) * s;
    }
}
