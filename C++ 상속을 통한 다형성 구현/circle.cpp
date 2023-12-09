//--------------------------------------------------------------------------------------
// 중심점과 반지름으로 원 만들기
//--------------------------------------------------------------------------------------
#include <iostream>
#include "circle.h"
#include "point.h"
#include "shape.h"

Circle::Circle() : center(0, 0), red{ 0 } {}
Circle::Circle(const Point& ct, double r)
{
	center = ct;
	red = r;
	std::cout << "원 생성" << '\n';
}
Circle::Circle(const Circle& other) : center{other.center}, red{other.red}
{
}
Circle::~Circle() 
{
	std::cout << "원 소멸" << '\n';
}

void Circle::draw() const
{
	std::cout << "원 - 중심점(" << center.x << ',' << center.y << ") 반지름 " << red << '\n';
}