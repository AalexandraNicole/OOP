#pragma once
#include <iostream>
#include <stdarg.h>
#pragma warning(disable : 4996)
using namespace std;

class Math
{
public:
    static int Add(int, int);
    static int Add(int, int, int);
    static int Add(double, double);
    static int Add(double, double, double);
    static int Mul(int, int);
    static int Mul(int, int, int);
    static int Mul(double, double);
    static int Mul(double, double, double);
    static int Add(int count, ...); // sums up a list of integers
    static char* Add(const char*, const char*);
};