#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

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

namespace UnitTestLab52
{
    TEST_CLASS(UnitTestLab52)
    {
    public:

        TEST_METHOD(TestFunctionS)
        {
            double x = 1.5;
            double eps = 0.0001;
            int n = 0;
            double s = 0;

            S(x, eps, n, s);

            double expected = log(x);
            Assert::AreEqual(expected, s, 0.001);
        }
    };
}
