#include "Hex.h"

Hex::Hex(const char* valoare)
{
	this->val = new char[20];
	strcpy(this->val, valoare);
}

Hex::Hex(int valoare)
{
	this->val = new char[20];
	_itoa(valoare, this->val,16);
}

int Convert(char* x)
{
	int rez=0;
	for (int i = 0; x[i] ; i++)
	{
		rez = rez * 16 + (x[i] <= '9') ? x[i] - '0' : (x[i] >= 'a' && x[i] <= 'f') ? x[i] - 'a' + 10 : x[i] - 'A' + 10;
	}
	return rez;

}

Hex Hex::operator+(const Hex& a)
{
	int x = Convert(this->val);
	int y = Convert(a.val);
	x = x + y;
	return Hex(x);
}

Hex Hex::operator-(const Hex& a)
{
	int x = Convert(this->val);
	int y = Convert(a.val);
	x = x - y;
	return Hex(x);
}

Hex::operator char* () {
	return this->val;
}

char& Hex::operator[](int i)
{
	return this->val[i];
}