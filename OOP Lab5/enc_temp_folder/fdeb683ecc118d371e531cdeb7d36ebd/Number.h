#pragma once
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <string>
#include <stdlib.h>

using namespace std;

class Number
{
	char* value;
	int base;

	int getLen(const char*);
public:
	Number(const char* value, int base);// base intre 2-16
	Number(int value);
	~Number();


	void SwitchBase(int newBase);
	void Print();
	int GetDigitsCount();
	int GetBase();

	Number(const Number& a);//copy ctor
	Number operator=(const Number& val);//copy assigment ooperator
	char operator[] (int index);
	Number operator+(const Number& val);
	Number operator- (const Number& val);
	int operator> (const Number& val);
	Number operator+= (const Number& val);
	char* operator=(const char* val);
	Number operator--();
	Number operator--(int);

};