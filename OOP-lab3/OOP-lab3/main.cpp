#include "Math.h"

int main() {
	Math Exemplu;
	int a = Exemplu.Add(23, 4);
	cout << a << endl;
	int b = Exemplu.Add(3, 4, 4);
	cout << b << endl;
	double c = Exemplu.Add(3.1, 1.0);
	cout << c << endl;
	double d = Exemplu.Add(3.0, 4.1, 5.9);
	cout << d << endl;
	int x = Exemplu.Mul(1, 2);
	cout << x << endl;
	int y = Exemplu.Mul(3, 4, 5);
	cout << y << endl;
	double z = Exemplu.Mul(4.5, 6.5);
	cout << z << endl;
	double w = Exemplu.Mul(4.5, 6.5, 1.1);
	cout << w << endl;
	int A = Exemplu.Add(1, 2, 3, 4, 5, 6, 7, 8, 9);
	char* str = Exemplu.Add(nullptr, "Ziua!");
	cout << str << endl;
}