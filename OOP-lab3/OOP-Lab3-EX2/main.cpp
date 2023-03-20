#include "Canvas.h"
using namespace std;
int main()
{
	Canvas c1(40, 40);
	c1.DrawLine(0, 0, 0, 5, '*');
	c1.Clear();
	c1.DrawCircle(25, 25, 10, '*');
	c1.FillRect(19, 19, 22, 22, '#');
	c1.SetPoint(23, 24, '8');
	c1.FillRect(19, 27, 22, 30, '#');
	c1.DrawLine(23, 24, 25, 26, '*');
	c1.DrawLine(25, 26, 27, 24, '*');
	c1.DrawRect(29, 21, 31, 28, '*');
	c1.Print();
}