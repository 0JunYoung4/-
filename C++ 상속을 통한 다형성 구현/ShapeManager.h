//----------------------------------------------------------------------------------
// 도형 관리 클래스 - 여러 개의 도형을 관리함
//----------------------------------------------------------------------------------
#include "shape.h"

#pragma once
class ShapeManager {
	int nShape;		// 도형의 개수
	int capacity;	// 최대 용량
	Shape** shapes;	// 도형의 포인터를 담을 메모리
public:
	explicit ShapeManager(int n);		//담을 수 있는 도형의 갯수를 생성자에 전달

	~ShapeManager();

	void insert(Shape*);	// 도형을 추가하는 함수
	void draw() const;		// 전체 도형을 그리는 함수

	void erase(int);
};