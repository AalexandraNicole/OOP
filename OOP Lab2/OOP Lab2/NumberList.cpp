#include "NumberList.h"
#include <iostream>
// EX 1
using namespace std;

void NumberList::Init()
{
	count = 0;
	memset(numbers, 0, 10 * sizeof(int));
}

bool NumberList::Add(int x) 
{
	int verificare=count;
	numbers[count] = x;
	count++;
	if (verificare == count)
		return false;
	else
		return true;
}

void NumberList::Sort()
{
	for (int i = 0; i < count-1; i++)
	{
		for (int j = 0; j < count-i-1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				int aux = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = aux;
			}
		}
	}
}

void NumberList::Print() 
{
	cout << "Lista este: ";
	for (int i = 0; i < count; i++)
		cout << numbers[i] << " " << endl;
}