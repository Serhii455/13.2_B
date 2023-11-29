#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_13.2_B/13.2_B.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int expected1 = 4;
			int expected2 = 6;
			int expected3 = 1;

			int result1 = findGCD(8, 12); 
			int result2 = findGCD(18, 24, 30);
			int result3 = findGCD(17, 23, 31, 41);

			Assert::AreEqual(expected1, result1); 
			Assert::AreEqual(expected2, result2); 
			Assert::AreEqual(expected3, result3);
		}
	};
}
