//--------------------------------------------------------------------------------------
// ¼¼ Á¡À¸·Î »ï°¢ÇüÀ» Á¤ÀÇÇÑ´Ù
//--------------------------------------------------------------------------------------
#include <iostream>
#include "point.h"
#include "shape.h"
#include "triangle.h"

Triangle::Triangle() : p1(), p2(), p3()
{
}

Triangle::Triangle(const Point& pa, const Point& pb, const Point& pc) : p1(pa), p2(pb), p3(pc)
{
	std::cout << "»ï°¢Çü »ý¼º" << '\n';
}

Triangle::Triangle(const Triangle& other)
{
	p1 = other.p1;
	p2 = other.p2;
	p3 = other.p3;
}

Triangle::~Triangle()
{
	std::cout << "»ï°¢Çü ¼Ò¸ê" << '\n';
}

void Triangle::draw() const
{
	std::cout << "»ï°¢Çü - (" << p1.x << ',' << p1.y << "), (" 
		<< p2.x << ',' << p2.y << "), ("
		<< p3.x << ',' << p3.y << ")\n";
}
