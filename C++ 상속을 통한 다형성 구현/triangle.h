//--------------------------------------------------------------------------------------
// 세 점으로 삼각형을 정의한다
//--------------------------------------------------------------------------------------
#pragma once
#include "point.h"
#include "shape.h"

class Triangle : public Shape {
	Point p1, p2, p3;
public:
	Triangle();
	Triangle(const Point&, const Point&, const Point&);
	Triangle(const Triangle& other);
	~Triangle() override;		// override를 통해 삼각형의 소멸자를 실행

	virtual void draw() const override;
};
