#include "Sort.h"

Sort::Sort(int nr_elements, int max, int min)
{
	this->nr_elemente = nr_elements;
	this->v = new int[nr_elements];
	srand(time(NULL));
	for (int i = 0; i < nr_elements; i++)
		this->v[i] = min + (rand() % (max - min + 1));
}

Sort::Sort(int* vector, int nr_elemente)
{
	this->nr_elemente = nr_elemente;
	this->v = new int[nr_elemente];
	for (int i = 0; i < nr_elemente; i++)
		this->v[i] = vector[i];
}

Sort::Sort(int nr_elemente, ...)
{
	this->nr_elemente = nr_elemente;
	this->v = new int[nr_elemente];
	va_list elemente;
	va_start(elemente, nr_elemente);
	for (int i = 0; i < nr_elemente; i++)
	{
		this->v[i] = va_arg(elemente, int);
	}
	va_end(elemente);
}


Sort::Sort(const char* vector)
{
	int nr_elemente = 0;
	for (int i = 0; i < strlen(vector); i++)
	{
		if (vector[i] == ',')
			nr_elemente++;
	}
	this->nr_elemente = nr_elemente + 1;
	this->v = new int[this->nr_elemente];
	char* sir = new char[strlen(vector)];
	for (int i = 0; i < this->nr_elemente; i++)
	{
		sir[i] = vector[i];
	}
	char* p;
	int k = 0;
	p = strtok(sir, ",");
	while (p)
	{
		this->v[k] = atoi(p);
		k++;
		p = strtok(nullptr, ",");
	}

}


void Sort::InsertSort(bool ascendent)
{
	if (ascendent == true)
	{
		int key, j;
		for (int i = 0; i < this->nr_elemente; i++)
		{
			key = this->v[i];
			j = i - 1;
			while (j >= 0 && v[j] > key)
			{
				v[j + 1] = v[j];
					j --;
			}
			v[j + 1] = key;
		}
	}
	else if (ascendent == true)
	{
		int key, j;
		for (int i = 0; i < this->nr_elemente; i++)
		{
			key = this->v[i];
			j = i - 1;
			while (j >= 0 && v[j] < key)
			{
				v[j + 1] = v[j];
				j--;
			}
			v[j + 1] = key;
		}
	}
}
void QuickSortHelperFalse(int* v, int left, int right);
void QuickSortHelperTrue(int* v, int left, int right);

void Sort::QuickSort(bool ascendent)
{
	if (ascendent == true)
		QuickSortHelperTrue(this->v, 0, this->nr_elemente - 1);
	else if (ascendent == false)
		QuickSortHelperFalse(this->v, 0, this->nr_elemente - 1);

}

void Sort::BubbleSort(bool ascendent )
{
	if (ascendent == true)
	{
		for (int i = 0; i < this->nr_elemente; i++)
			for (int j = i + 1; j < this->nr_elemente; j++)
				if (this->v[i] > this->v[j])
				{
					int aux = this->v[i];
					this->v[i] = this->v[j];
					this->v[j] = aux;
				}
	}
	else if (ascendent == false)
	{
		for (int i = 0; i < this->nr_elemente; i++)
			for (int j = i + 1; j < this->nr_elemente; j++)
				if (this->v[i] < this->v[j])
				{
					int aux = this->v[i];
					this->v[i] = this->v[j];
					this->v[j] = aux;
				}
	}
}

void Sort::Print()
{
	for (int i = 0; i < this->GetElementsCount(); i++)
		printf("%d ", v[i]);
	printf("\n");
}

int Sort::GetElementsCount()
{
	return this->nr_elemente;
}

int Sort::GetElementFromIndex(int index)
{
	return this->v[index];
}

void QuickSortHelperTrue(int* v, int left, int right)
{
	int i, j, pivot;
	while (left < right) {
		i = left;
		j = right;
		pivot = v[(left + right) / 2];
		while (i <= j) {
			while (v[i] < pivot) {
				i++;
			}
			while (v[j] > pivot) {
				j--;
			}
			if (i <= j) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
				i++;
				j--;
			}
		}
		if (j - left < right - i) {
			if (left < j) {
				QuickSortHelperTrue(v, left, j);
			}
			left = i;
		}
		else {
			if (i < right) {
				QuickSortHelperTrue(v, i, right);
			}
			right = j;
		}
	}
}

void QuickSortHelperFalse(int* v, int left, int right)
{
	int i, j, pivot;
	while (left < right) {
		i = left;
		j = right;
		pivot = v[(left + right) / 2];
		while (i <= j) {
			while (v[i] > pivot) {
				i++;
			}
			while (v[j] < pivot) {
				j--;
			}
			if (i <= j) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
				i++;
				j--;
			}
		}
		if (j - left < right - i) {
			if (left < j) {
				QuickSortHelperFalse(v, left, j);
			}
			left = i;
		}
		else {
			if (i < right) {
				QuickSortHelperFalse(v, i, right);
			}
			right = j;
		}
	}
}