#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Student {
	string Name;
	int MathGrade;
	int EnglishGrade;
	int HistoryGrade;
public:
	void SetName(string name);
	void SetMathGrade(int grade);
	void SetEnglishGrade(int grade);
	void SetHistoryGrade(int grade);
	string GetName();
	int GetMathGrade();
	int GetHistoryGrade();
	int GetEnglishGrade();
	float MediaAritmetica();

};
