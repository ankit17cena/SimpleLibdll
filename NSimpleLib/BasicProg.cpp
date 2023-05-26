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

void free1(const char* str) {
	delete[] str;
}

const char* addStrings(std::string a, std::string b) {
	int i = (int)a.length() - 1, j = (int)b.length() - 1, carry = 0;
	std::string result = "";

	while (i >= 0 || j >= 0 || carry != 0) {
		int sum = carry;
		if (i >= 0) {
			sum += a[i] - '0';
			i--;
		}
		if (j >= 0) {
			sum += b[j] - '0';
			j--;
		}
		carry = sum / 10;
		result += std::to_string(sum % 10);
	}

	std::reverse(result.begin(), result.end());

	char* ans = new char[result.size() + 1];
	strcpy_s(ans,result.size()+1, result.c_str());
	return ans;
	free1(ans);
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
