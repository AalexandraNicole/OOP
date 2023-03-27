#include "Sort.h"

int main()
{
	int* ev = new int[9] {2, 5, 1, 3, 4, 7, 6, 9, 8};
	Sort s(ev, 9);
	printf("%d\n", s.GetElementFromIndex(5));
	s.QuickSort(false);
	printf("%d\n", s.GetElementFromIndex(5));
	s.Print();
	Sort g("10,42,5,53,21,54,4,39");
	g.InsertSort(true);
	g.Print();
	Sort h(10, 200, 100);
	h.BubbleSort(false);
	h.Print();
	Sort j(7, 2, 5, 0, 4, 6, 7, 9);
	j.QuickSort(true);
	j.Print();
	Sort k;
	k.InsertSort(false);
	k.Print();
}