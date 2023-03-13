#include <iostream>
#include "Header1.h"
using namespace std;

/*typedef int(*funcPointer)(int, int);

int sum(int a, int b)
{
	return a + b;
}
int dif(int a, int b)
{
	return a - b;
}

int calcul(int a, int b, funcPointer f)
{
	return f(a, b);
}

int main()
{
	int s = 0, x = 0, r, p, q;
	srand(0);
	funcPointer arr[100];
	funcPointer arr2[2] = {sum ,dif };

	for (int i = 0; i < 100; i++)
	{
		arr[i] = arr2[i % 2];
	}

	for (int i = 0; i < 100; i++)
	{
		r = rand();
		p = rand();
		x += calcul(r, p, arr[i]);
		printf("%d %c %d = %d\n", r, (i % 2 == 0) ? '+' : '-', p, x);
		s += x;
	}

	return 0;
   
}*/
/*
int functie(int a)
{
	static int b = 65534;
	return a + b;
}

void cautare();
int main()
{
	int a = f1(10), b = f2(10);
	printf("%d %d\n", a, b);
	int c = functie(2);
	cautare();
	int d = functie(2), e = functie(2);
	printf("%d %d %d", c, d, e);

	return 0;
}

void cautare()
{
	unsigned char* mem = (unsigned char*)main;
	for (int i = 0; ;i++)
	{
		if (*((int*)(mem + i)) == 65534)
		{
			DWORD p = 0;
			VirtualProtect(mem + i, sizeof(int*), PAGE_EXECUTE_READWRITE, &P);
			*((int*)(mem + i)) = 0;
			break;
		}
	}

}*/

int main() {
	A x;
	int v = x.Calcul();
	printf("%d", v);
}