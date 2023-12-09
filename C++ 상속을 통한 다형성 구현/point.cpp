#include <iostream>
#include "point.h"

Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point(int a,int b)
{
	x = a, y = b;
}
Point::Point(double a, double b)
{
	x = a;
	y = b;
}