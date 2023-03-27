#include "Math.h"

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return (double)(a + b);
}

int Math::Add(double a, double b, double c)
{
	return (double)(a + b + c);
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return (a * b);
}

int Math::Mul(double a, double b, double c)
{
	double nr = a * b * c;
	return nr;
}

int Math::Add(int count, ...)
{
	int sum = 0;
	va_list ptr;
	va_start(ptr, count);
	for (int i=0; i < count; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return sum;
}

char* Math::Add(const char* a, const char* b)
{
	if (a == nullptr)
		return nullptr;
	if (b == nullptr)
		return nullptr;
	char* str = new char[strlen(a) + strlen(b) + 1];
	strcpy(str, a);
	strcat(str, b);
	return str;
}