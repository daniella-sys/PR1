#include <iostream>
#include <cmath>

using namespace std;

double k(double x, double y);

int main() {
    double p, q;

    // Введення значень p та q з клавіатури
    cout << "Введіть значення p: ";
    cin >> p;
    cout << "Введіть значення q: ";
    cin >> q;

   
    double part1 = k(p + q, p * q);
    double k_val2 = k(p * p, q);
    double part2 = k_val2 * k_val2; 
    double numerator = part1 + part2;

    double denominator = 1.0 + k(p, q * q);

    if (denominator == 0) {
        cout << "Помилка!" << endl;
        return 1;
    }

    double result = numerator / denominator;

    // Виведення результату
    cout << "Результат обчислення виразу для варіанту 18: " << result << endl;

    return 0;
}

double k(double x, double y) {
    double sin_y = sin(y);
    double term1 = x / (1.0 + sin_y * sin_y);
    double term2 = y / (1.0 + x * x);
    return term1 + term2;
}
