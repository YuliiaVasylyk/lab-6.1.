#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-6.1(it)\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int A[4] = { 1,2,3,4 };
			int S = Sum(A, 4);
			Assert::AreEqual(S, 10);
		}
	};
}
