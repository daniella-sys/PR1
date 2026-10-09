// Лабораторна робота № 5.2 (Варіант 18)
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

int main()
{
    double xp, xk, x, dx, eps, s = 0;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------\n";
    cout << "|" << setw(7) << "x"
        << "|" << setw(10) << "ln(x)"
        << "|" << setw(10) << "S"
        << "|" << setw(5) << "n" << " |\n";
    cout << "-------------------------------------------------\n";

    x = xp;
    while (x <= xk)
    {
        S(x, eps, n, s);
        cout << "|" << setw(7) << setprecision(2) << x
            << "|" << setw(10) << setprecision(5) << log(x)
            << "|" << setw(10) << setprecision(5) << s
            << "|" << setw(5) << n << " |\n";
        x += dx;
    }
    cout << "-------------------------------------------------\n";
    return 0;
}

void S(const double x, const double eps, int& n, double& s)
{
    n = 0;
    double a = x - 1;
    s = a;
    do {
        n++;
        A(x, n, a);
        s += a;
    } while (abs(a) >= eps);
}

void A(const double x, const int n, double& a)
{
    double R = -(n * (x - 1)) / (n + 1);
    a = a * (-1) * (x - 1) * n / (n + 1);
}
