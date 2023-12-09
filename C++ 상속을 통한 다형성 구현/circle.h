//--------------------------------------------------------------------------------------
// 중심점의 좌표와 반지름으로 원을 정의할 수 있다
//--------------------------------------------------------------------------------------
#pragma once
#include "point.h"
#include "shape.h"

class Circle : public Shape{
	Point center;	// 중심점
	double red;		// 반지름
public:
	Circle();		// 디폴트 생성자
	Circle(const Point&, double);	// 생성자
	Circle(const Circle&);		// 복사생성자를 굳이 만들어 줄 필요는 없다

	~Circle() override;		// 소멸자를 만들어줄 필요는 없다		// override를 통해 원의 소멸자를 실행
	virtual void draw() const override;
};