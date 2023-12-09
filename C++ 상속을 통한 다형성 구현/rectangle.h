//--------------------------------------------------------------------------------------
// 대각선에 있는 점 2개로 사각형을 정의한다
//--------------------------------------------------------------------------------------
#pragma once
#include "point.h"
#include "shape.h"

class Rectangle : public Shape {
	Point p1, p2;
public:
	Rectangle();
	Rectangle(const Point&, const Point&);
	~Rectangle() override;		// override를 통해 사각형의 소멸자를 실행
	Rectangle(const Rectangle&);

	virtual void draw() const;
};
