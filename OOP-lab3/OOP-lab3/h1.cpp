#include "Header1.h"
#include <iostream>

using namespace std;
A::A()
{
	a = 1;
	q = 2;
	printf("A fost apelat constructorul\n");
}
A::~A()
{
	printf("A fost apelat destructorul\n");
}
int A::Calcul()
{
	return 100 + a + q;
}