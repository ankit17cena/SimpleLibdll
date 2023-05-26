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
			const char* x = "123";
			const char* y = "456";
			const char* exp = "579";
			const char* a= addStrings(x, y);
			Assert::AreEqual(exp, a);

			x = "0";
			y = "0";
			exp = "0";
			a= addStrings(x, y);
			Assert::AreEqual(exp, a);

			x = "0";
			y = "1234";
			exp = "1234";
			a = addStrings(x, y);
			Assert::AreEqual(exp, a);

			x = "456";
			y = "0";
			exp = "456";
			a = addStrings(x, y);
			Assert::AreEqual(exp, a);

			x = "1001";
			y = "999";
			exp = "2000";
			a = addStrings(x, y);
			Assert::AreEqual(exp, a);

			const char* actual = addStrings("", "");
			const char* expected = "0";
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
