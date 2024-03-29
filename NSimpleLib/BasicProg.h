#pragma once
#include <string>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <memory>

extern "C" __declspec(dllexport) bool isPerfectSquare(int n);

extern "C" __declspec(dllexport) bool areBracketsBalanced(const std::string& s);

extern "C" __declspec(dllexport) const char* addStrings(std::string a, std::string b);

extern "C" __declspec(dllexport) int sum_of_numbers(const std::string& s);