#include "Number.h"



int Number::getLen(const char* a) {
	int count;
	for (count = 0; a[count]; count++);
	return count;
}

Number::Number(const char* value, int base) {
	int i;
	for (i = 0; value[i]; i++)
	{
		this->value[i] = value[i];
	}
	this->value[i] = 0;
	this->base = base;
	//memcpy(this->value, value, getLen(value));
};

Number::Number(int value) {
	char convert[(((sizeof value) * CHAR_BIT) + 2)/3 +2];
	memcpy(this->value,convert,getLen(convert));
	printf("\n %c aceasta este valoarte convert de pe net", convert);
};

Number::~Number() {
	delete[] value;
};


void Number::SwitchBase(int newBase) {
	this->base = newBase;
	int decimalValue = 0;
	int len = getLen(this->value);

	for (int i = 0; i < len; i++) {
		int digit = (this->value[i] >= 'A') ? (this->value[i] - 'A' + 10) : (this->value[i] - '0');
		decimalValue += digit * pow(this->GetBase(), len - 1 - i);
	}
	int i = 0;
	char* result = new char[256];
	while (decimalValue > 0) {
		int digit = decimalValue % newBase;
		char digitChar = (digit >= 10) ? ('A' + digit - 10) : ('0' + digit);
		result[i++] = digitChar;
		decimalValue /= newBase;
	}
	result[i] = 0;
	for (int j = 0; j < getLen(result); j++)
		this->value[j] = result[getLen(result) - 1 - j];
	this->value[getLen(result)] = 0;
	delete[] result;
};
void Number::Print() {
	printf(value);
	printf("\n");
};
int Number::GetDigitsCount() {
	/*char ch=value[0];
	int i = 1;
	int nr_digits = 0;
	while (ch != '/0')
	{
		nr_digits += 1;
		ch = value[i];
		i++;
	}
	return nr_digits;*/
	return getLen(this->value);
};
int Number::GetBase() {
	return this->base;
};

Number::Number(const Number& a) {
	memcpy(this->value, a.value, getLen(a.value));
	this->base = a.base;
}

char Number::operator[] (int index) {
	return this->value[index];
};

void Number::operator=(const Number& val) {
	if(this->base)
	this->base = val.base;
	int i;
	for (i = 0; val.value[i]; i++)
	{
		this->value[i] = val.value[i];
	}
	this->value[i] = 0;
};//copy assigment ooperator


int convert(Number& x)
{
	int int_value;
	int old_base = x.GetBase();
	x.SwitchBase(10);
	char* aux = x.value;
	int_value = atoi(x.value);
	x.SwitchBase(old_base);
	return int_value;
}
Number Number::operator+(Number& val) {
	if (val.base > this->base)
		this->base = val.base;
	int a = convert(*this);
	int b = convert(val);
	a = a + b;
	Number aux(a);
	aux.SwitchBase(this->base);
	return aux;
};
Number Number::operator- (Number& val) {
	if (val.base > this->base)
		this->base = val.base;
	int a = convert(*this);
	int b = convert(val);
	a = a - b;
	Number aux(a);
	aux.SwitchBase(this->base);
	return aux;
};
int Number::operator> (const Number& val) {
	return 0;
};
Number Number::operator+= (const Number& val) {
	return val;
};
char* Number::operator=(const char* val) {
	char b = 'abc';
	char* a = &b;
	return a;
};
Number Number::operator--() {
	return *this;
};
Number Number::operator--(int) {
	return *this;
};