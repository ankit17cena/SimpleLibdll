#include "pch.h"
#include "CppUnitTest.h"
#include "../NSimpleLib/BasicProg.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestSimpleLib
{
	TEST_CLASS(TestSimpleLib)
	{
	public:
		
		TEST_METHOD(isPerfectSquares)
		{
			Assert::IsTrue(isPerfectSquare(4));
			Assert::IsTrue(isPerfectSquare(9));
			Assert::IsTrue(isPerfectSquare(16));
			Assert::IsTrue(isPerfectSquare(25));
			Assert::IsFalse(isPerfectSquare(30));
			Assert::IsFalse(isPerfectSquare(123456789));

		}

		TEST_METHOD(areBracketsBalance)
		{
			Assert::IsTrue(areBracketsBalanced(""));
			Assert::IsTrue(areBracketsBalanced("()"));
			Assert::IsTrue(areBracketsBalanced("()[]{}"));
			Assert::IsTrue(areBracketsBalanced("({[]})"));
			Assert::IsFalse(areBracketsBalanced("("));
			Assert::IsFalse(areBracketsBalanced(")"));
			Assert::IsFalse(areBracketsBalanced("([)]"));
			Assert::IsFalse(areBracketsBalanced("{{}"));
		}

		TEST_METHOD(addString)
		{   
			const char* actual = addStrings("9", "6");
			const char* expected = "15";
			Assert::IsNotNull(actual);
			Assert::AreEqual(expected, actual);

			actual = addStrings("123", "456");
			expected = "579";
			Assert::IsNotNull(actual);
			Assert::AreEqual(expected, actual);

			actual = addStrings("0", "1234");
			expected = "1234";
			Assert::IsNotNull(actual);
			Assert::AreEqual(expected, actual);

			actual = addStrings("456", "0");
			expected = "456";
			Assert::IsNotNull(actual);
			Assert::AreEqual(expected, actual);

			actual = addStrings("1001", "999");
			expected = "2000";
			Assert::IsNotNull(actual);
			Assert::AreEqual(expected, actual);
		
			actual = addStrings("0", "0");
			expected = "0";
			Assert::IsNotNull(actual);
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(sum_of_number) {
			Assert::AreEqual(11, sum_of_numbers("hello5world6"));
			Assert::AreEqual(579, sum_of_numbers("abc123def456"));
			Assert::AreEqual(21, sum_of_numbers("1a2b3c4d5e6f"));
			Assert::AreEqual(0, sum_of_numbers("no_numbers_here"));

		}
	};
}
