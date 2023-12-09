//----------------------------------------------------------------------------------
// 도형 관리 클래스 - 여러 개의 도형을 관리함
//----------------------------------------------------------------------------------
#include <iostream>
#include "ShapeManager.h"

ShapeManager::ShapeManager(int n)
{
	nShape = 0;
	capacity = n;
	shapes = new Shape* [capacity];
	//std::cout << "매니저 생성" << '\n';
}

ShapeManager::~ShapeManager()
{
	for (int i = 0; i < nShape; ++i) {
		delete shapes[i];
	
	}
	delete[] shapes;
	//std::cout << "매니저 소멸" << '\n';
	
	
}

void ShapeManager::insert(Shape* a)
{
	shapes[nShape] = a;
	++nShape;
}


void ShapeManager::draw() const
{
	std::cout << "---------------------------------------------------" << '\n';
	std::cout << "관리하는 모든 도형을 그립니다" << '\n';
	std::cout << "최대 " << capacity << "개의 도형을 담을 수 있습니다" << '\n';
	std::cout << "모두 " << nShape << "개의 도형이 있습니다" << '\n';
	std::cout << "---------------------------------------------------" << "\n\n";

	for (int i = 0; i < nShape; ++i) {
		std::cout << '[' << i << "]  ";
		shapes[i]->draw();
	}

	std::cout << "\n---------------------------------------------------" << '\n';
	std::cout << "그리기를 마칩니다" << '\n';
	std::cout << "---------------------------------------------------" << '\n';
}

void ShapeManager::erase(int n)
{
	if (n < 0 || n >= nShape) {
		std::cout << "해당 번호의 도형은 없습니다" << '\n';
		return;
	}

	delete shapes[n];
	for (int i = n; i < nShape-1; ++i) {
		shapes[i] = shapes[i + 1];
	}
	--nShape;
}