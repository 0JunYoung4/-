//--------------------------------------------------------------------------------------
// �߽����� ��ǥ�� ���������� ���� ������ �� �ִ�
//--------------------------------------------------------------------------------------
#pragma once
#include "point.h"
#include "shape.h"

class Circle : public Shape{
	Point center;	// �߽���
	double red;		// ������
public:
	Circle();		// ����Ʈ ������
	Circle(const Point&, double);	// ������
	Circle(const Circle&);		// ��������ڸ� ���� ����� �� �ʿ�� ����

	~Circle() override;		// �Ҹ��ڸ� ������� �ʿ�� ����		// override�� ���� ���� �Ҹ��ڸ� ����
	virtual void draw() const override;
};