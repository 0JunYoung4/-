//--------------------------------------------------------------------------------------
// 대각선에 있는 점 2개로 사각형을 정의한다
//--------------------------------------------------------------------------------------
#include <iostream>
#include "point.h"
#include "shape.h"
#include "rectangle.h"

Rectangle::Rectangle() : p1(),p2()
{
}

Rectangle::Rectangle(const Point& pa, const Point& pb) : p1(pa), p2(pb)
{
	std::cout << "사각형 생성" << '\n';
}

Rectangle::Rectangle(const Rectangle& other)
{
	p1 = other.p1;
	p2 = other.p2;
}

Rectangle::~Rectangle()
{
	std::cout << "사각형 소멸" << '\n';
}

void Rectangle::draw() const
{
	std::cout << "사각형 - (" << p1.x << ',' << p1.y << "), ("
		<< p2.x << ',' << p2.y << ")\n";
}
