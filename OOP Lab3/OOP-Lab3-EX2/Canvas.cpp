#include "Canvas.h"

void plotLineLow(int x0, int y0, int x1, int y1, char ch, Canvas* p);
void plotLineHigh(int x0, int y0, int x1, int y1, char ch, Canvas* p);

Canvas::Canvas(int width, int height)
{
	this->w = width;
	this->h = height;
	for (int i = 0; i < this->w; i++)
		for (int j = 0; j < this->h; j++)
			this->cvs[i][j] = ' ';
}

void Canvas::DrawCircle(int x, int y, int r, char ch)
{
	float beta = (2 * pi) / 20;
	int x1[21], y1[21];
	for (int i = 0; i < 21; i++)
	{
		x1[i] = x + r * cos(beta * i);
		y1[i] = y + r * sin(beta * i);
	}
	for (int i = 0; i < 20; i++)
		this->DrawLine(x1[i], y1[i], x1[i + 1], y1[i + 1], ch);
}

void Canvas::FillCircle(int x, int y, int r, char ch)
{
	for (int i = r; i > 0; i--)
		this->DrawCircle(x, y, i, ch);
}

void Canvas::DrawRect(int x0, int y0, int x1, int y1, char ch)
{
	this->DrawLine(x0, y0, x1, y0, ch);
	this->DrawLine(x1, y0, x1, y1, ch);
	this->DrawLine(x1, y1, x0, y1, ch);
	this->DrawLine(x0, y1, x0, y0, ch);
}

void Canvas::FillRect(int x0, int y0, int x1, int y1, char ch)
{
	for (int i = x0; i <= x1; i++)
		for (int j = y0; j <= y1; j++)
			this->cvs[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
	this->cvs[x][y] = ch;
}

void Canvas::DrawLine(int x0, int y0, int x1, int y1, char ch)
{
	if (abs(y1 - y0) < abs(x1 - x0))
		if (x0 > x1)
			plotLineLow(x1, y1, x0, y0, ch, this);
		else
			plotLineLow(x0, y0, x1, y1, ch, this);
	else
		if (y0 > y1)
			plotLineHigh(x1, y1, x0, y0, ch, this);
		else
			plotLineHigh(x0, y0, x1, y1, ch, this);
}

void Canvas::Print()
{
	for (int i = 0; i < this->w; i++)
	{
		for (int j = 0; j < this->h; j++)
			printf("%c", this->cvs[i][j]);
		printf("\n");
	}

}

void Canvas::Clear()
{
	for (int i = 0; i < this->w; i++)
		for (int j = 0; j < this->h; j++)
			this->cvs[i][j] = ' ';
}


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