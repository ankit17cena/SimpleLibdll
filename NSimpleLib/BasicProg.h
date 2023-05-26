#pragma once
#include<string>

extern "C" __declspec(dllexport) bool isPerfectSquare(int n);

extern "C" __declspec(dllexport) bool areBracketsBalanced(const std::string& s);

extern "C" __declspec(dllexport) std::string addStrings(std::string &a,std::string &b);

extern "C" __declspec(dllexport) int sum_of_numbers(const std::string& s);