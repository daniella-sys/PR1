#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    double X_poch, X_kin, dX;

    cout << "Введіть a, b, c: ";
    cin >> a >> b >> c;

    cout << "Введіть X_поч, X_кін, dX: ";
    cin >> X_poch >> X_kin >> dX;

    if (dX <= 0 || X_poch > X_kin) {
        cout << "Помилка: некоректні межі або крок dX!" << endl;
        return 1;
    }

    cout << "\n-----------------------------" << endl;
    cout << "|" << setw(12) << "X" << " |" << setw(12) << "F(x)" << " |" << endl;
    cout << "-----------------------------" << endl;

    
    for (double x = X_poch; x <= X_kin + dX / 2.0; x += dX) {
        double F;
        bool error_flag = false; 

       
        if (x < 0 && b != 0) {
            F = a * x * x - b * x * x;
        }
        else if (x > 0 && b == 0) {
            if (x - a == 0) {
                error_flag = true; 
            }
            else {
                F = (x - c) / (x - a);
            }
        }
        else {
            
            if (c * (x - 10) == 0) {
                error_flag = true; 
            }
            else {
                F = (x + 5.0) / (c * (x - 10.0));
            }
        }

        cout << "|" << setw(12) << fixed << setprecision(4) << x << " |";
        if (error_flag) {
            cout << setw(12) << "Діл. на 0" << " |" << endl;
        }
        else {
            cout << setw(12) << fixed << setprecision(4) << F << " |" << endl;
        }
    }

    cout << "-----------------------------" << endl;

    return 0;
}
