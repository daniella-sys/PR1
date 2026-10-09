#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// Додаємо саму функцію k, яку потрібно протестувати
double k(double x, double y) {
    double sin_y = sin(y);
    double term1 = x / (1.0 + sin_y * sin_y);
    double term2 = y / (1.0 + x * x); // Виправлено помилку з x x
    return term1 + term2;
}

namespace КВАПСМ
{
    TEST_CLASS(КВАПСМ)
    {
    public:

        TEST_METHOD(TestMethodKFunction)
        {
            // Перевіряємо роботу функції k для конкретних значень
            // Очікуваний результат для k(0, 0) має бути 0
            double expected = 0.0;
            double actual = k(0.0, 0.0);

            // Порівнюємо з похибкою 0.0001
            Assert::AreEqual(expected, actual, 0.0001);
        }
    };
}
