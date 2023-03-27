#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>//transform(Path.begin(),Path.end(),Path.begin(),[](char c){ return tolower(c);}) -- face toate caracterele mici din Path//
#include <cstdarg>
#include <ctime>
#include <cstring>
#include <vector>
using namespace std;

class Sort {
	int* v;
	int nr_elemente;
public:
	Sort(int nr_elements, int min, int max);
	Sort() : v(new int[5] {2, 3, 4, 5, 6}), nr_elemente(5) {};//Lista de initializare
	Sort(int* vector, int nr_elem_vector);
	Sort(int nr_elemente,...);
	Sort(const char* vector);

	void InsertSort(bool ascendent = false);
	void QuickSort(bool ascendent = false);
	void BubbleSort(bool ascendent = false);
	void Print();
	int GetElementsCount();
	int GetElementFromIndex(int index);
};