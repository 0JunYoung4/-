//--------------------------------------------------------------------------------------
// �밢���� �ִ� �� 2���� �簢���� �����Ѵ�
//--------------------------------------------------------------------------------------
#pragma once
#include "point.h"
#include "shape.h"

class Rectangle : public Shape {
	Point p1, p2;
public:
	Rectangle();
	Rectangle(const Point&, const Point&);
	~Rectangle() override;		// override�� ���� �簢���� �Ҹ��ڸ� ����
	Rectangle(const Rectangle&);

	virtual void draw() const;
};
