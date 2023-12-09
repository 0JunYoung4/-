//--------------------------------------------------------------------------------------
// �밢���� �ִ� �� 2���� �簢���� �����Ѵ�
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
	std::cout << "�簢�� ����" << '\n';
}

Rectangle::Rectangle(const Rectangle& other)
{
	p1 = other.p1;
	p2 = other.p2;
}

Rectangle::~Rectangle()
{
	std::cout << "�簢�� �Ҹ�" << '\n';
}

void Rectangle::draw() const
{
	std::cout << "�簢�� - (" << p1.x << ',' << p1.y << "), ("
		<< p2.x << ',' << p2.y << ")\n";
}
