#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest521
{
	TEST_CLASS(UnitTest521)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = -2.;
			A(1, 0, a);
			Assert::AreEqual(a, 2.);
		}
		TEST_METHOD(TestMethod2)
		{
			double s = 0;
			int n = 0;
			S(1, 1, n, s);
			Assert::AreEqual(s, 1+(1./3.));
		}

	};
}
