#include "date.h"
void date::Output()
{
	cout << d << "/" << m << "/" << y;
}
void date::setDate(int dd, int mm, int yy)
{
	d = dd;
	m = mm;
	y = yy;
}
