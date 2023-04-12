#pragma once
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Hex {
	char* val;
public:
	Hex(const char* valoare);
	Hex(int valoare);
	Hex() {};

	Hex operator+(const Hex& a);
	Hex operator-(const Hex& a);
	operator char*();
	char& operator[](int i);


};