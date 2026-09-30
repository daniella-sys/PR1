#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k, N, i;
    double S;

    cout << "k = "; cin >> k;
    N = 15; // за умовою верхня межа N = 15

    // Спосіб 1: через цикл while
    S = 0;
    i = k;
    while (i <= N)
    {
        S += cos(1.0 * i) / (1.0 + pow(sin(1.0 * i), 2));
        i++;
    }
    cout << "S (while) = " << S << endl;

    // Спосіб 2: через цикл do-while
    S = 0;
    i = k;
    do {
        S += cos(1.0 * i) / (1.0 + pow(sin(1.0 * i), 2));
        i++;
    } while (i <= N);
    cout << "S (do-while) = " << S << endl;

    // Спосіб 3: через цикл for (зростання)
    S = 0;
    for (i = k; i <= N; i++)
    {
        S += cos(1.0 * i) / (1.0 + pow(sin(1.0 * i), 2));
    }
    cout << "S (for ++) = " << S << endl;

    // Спосіб 4: через цикл for (спадання)
    S = 0;
    for (i = N; i >= k; i--)
    {
        S += cos(1.0 * i) / (1.0 + pow(sin(1.0 * i), 2));
    }
    cout << "S (for --) = " << S << endl;

    return 0;
}
