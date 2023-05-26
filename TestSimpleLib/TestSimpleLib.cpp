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
			std::string x = "0", y = "0";
			std::string a = addStrings(x,y);
			std::string exp = "0";
			Assert::AreEqual(exp, a);
			x = "0", y = "1234";
			std::string b = addStrings(x,y);
			exp = "1234";
			Assert::AreEqual(exp, b);
			x = "456", y = "0";
			std::string c = addStrings(x,y);
			exp = "456";
			Assert::AreEqual(exp, c);
			x = "123", y = "456";
			std::string d = addStrings(x,y);
			exp = "579";
			Assert::AreEqual(exp, d);
			x = "1001", y = "999";
			std::string e = addStrings(x,y);
			exp = "2000";
			Assert::AreEqual(exp, e);
		}

		TEST_METHOD(sum_of_number) {
			Assert::AreEqual(11, sum_of_numbers("hello5world6"));
			Assert::AreEqual(579, sum_of_numbers("abc123def456"));
			Assert::AreEqual(21, sum_of_numbers("1a2b3c4d5e6f"));
			Assert::AreEqual(0, sum_of_numbers("no_numbers_here"));

		}
	};
}
