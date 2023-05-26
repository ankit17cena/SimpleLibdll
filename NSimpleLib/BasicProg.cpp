#include "pch.h"
#include "BasicProg.h"
#include <stack>

bool isPerfectSquare(int n) {
	if (n < 0) {
		return false;
	}
	else if (n == 0 || n == 1) {
		return true;
	}

	long left = 1, right = n;

	while (left <= right) {
		long mid = left + (right - left) / 2;
		long square = mid * mid;

		if (square == n) {
			return true;
		}
		else if (square < n) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	return false;
}

bool areBracketsBalanced(const std::string& s) {
	std::stack<char> stack;

	for (char c : s) {
		if (c == '(' || c == '{' || c == '[') {
			stack.push(c);
		}
		else if (c == ')' || c == '}' || c == ']') {
			if (stack.empty()) {
				return false;
			}

			char top = stack.top();
			stack.pop();

			if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
				return false;
			}
		}
	}

	return stack.empty();
}

std::string addStrings(std::string &a, std::string &b) {
	int n = (int)a.size(), m = (int)b.size();
	if (n < m) {
		std::swap(a, b);
		std::swap(n, m);
	}

	int carry = 0;
	std::string result = "";
	for (int i = 0; i < n; i++) {
		int digit_a = a[n - i - 1] - '0';
		int digit_b = i < m ? b[m - i - 1] - '0' : 0;

		int sum = digit_a + digit_b + carry;
		carry = sum / 10;
		result.push_back(sum % 10 + '0');
	}

	if (carry != 0) {
		result.push_back(carry + '0');
	}

	std::reverse(result.begin(), result.end());
	return result;
}

int sum_of_numbers(const std::string& s) {
	int sum = 0, current_number = 0;
	for (char c : s) {
		if (isdigit(c)) {
			current_number = current_number * 10 + (c - '0');
		}
		else {
			sum += current_number;
			current_number = 0;
		}
	}
	return sum + current_number;
}
