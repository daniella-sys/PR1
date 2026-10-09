#include "pch.h"
#include "CppUnitTest.h"

// Просто оголошуємо функцію, яку тестуємо
double f(const double x);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double expected = (pow(sin(2.0), 2) + sin(4.0)) / (1 + pow(cos(2.0), 2));
			double actual = f(2.0);
			Assert::AreEqual(expected, actual, 0.0001);
		}
	};
}
