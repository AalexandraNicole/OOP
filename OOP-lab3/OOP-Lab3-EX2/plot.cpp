#include "plot.h"

void plotLineLow(int x0, int y0, int x1, int y1, char ch, Canvas* p)
{
	int dx = x1 - x0;
	int dy = y1 - y0;
	int yi = 1;
	if (dy < 0)
	{
		yi = -1;
		dy = -dy;
	}
	int D = (2 * dy) - dx;
	int y = y0;
	for (int x = x0; x <= x1; x++)
	{
		p->SetPoint(x, y, ch);
		if (D > 0)
		{
			y = y + yi;
			D = D + (2 * (dy - dx));
		}
		else
			D = D + 2 * dy;
	}
}

void plotLineHigh(int x0, int y0, int x1, int y1, char ch, Canvas* p)
{
	int dx = x1 - x0;
	int dy = y1 - y0;
	int xi = 1;
	if (dx < 0)
	{
		xi = -1;
		dx = -dx;
	}
	int D = (2 * dx) - dy;
	int x = x0;
	for (int y = y0; y <= y1; y++)
	{
		p->SetPoint(x, y, ch);
		if (D > 0)
		{
			x = x + xi;
			D = D + (2 * (dx - dy));
		}
		else
			D = D + 2 * dx;
	}
}