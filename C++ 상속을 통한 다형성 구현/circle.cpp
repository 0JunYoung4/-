//--------------------------------------------------------------------------------------
// �߽����� ���������� �� �����
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
	std::cout << "�� ����" << '\n';
}
Circle::Circle(const Circle& other) : center{other.center}, red{other.red}
{
}
Circle::~Circle() 
{
	std::cout << "�� �Ҹ�" << '\n';
}

void Circle::draw() const
{
	std::cout << "�� - �߽���(" << center.x << ',' << center.y << ") ������ " << red << '\n';
}