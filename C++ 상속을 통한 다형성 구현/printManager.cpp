#include <iostream>
#include <string>
#include "ShapeManager.h"
#include "printManager.h"

void Start()
{
	std::cout << "----------------------" << '\n';
	std::cout << "프로그램을 시작합니다" << '\n';
	std::cout << "----------------------" << "\n\n";

	std::cout << "관리할 도형의 개수 - ";
}


void drawEnd()
{
	std::cout << "\n----------------------" << '\n';
	std::cout << "프로그램을 종료합니다" << '\n';
	std::cout << "----------------------" << '\n';
}

void drawMenu()
{
	std::cout << '\n' << "Menu" << "\n\n";
	std::cout << "[1] - 원하는 도형 추가"	<< '\n';
	std::cout << "[2] - 전체 도형 그리기"	<< '\n';
	std::cout << "[3] - 도형 지우기"		<< '\n';
	std::cout << "[4] - 프로그램 끝내기"	<< '\n';
	std::cout << "[5] - 설정"				<< '\n';
}

void drawShapeMenu()
{
	std::cout << "(1) - 삼각형" << '\n';
	std::cout << "(2) - 사각형" << '\n';
	std::cout << "(3) - 원" << '\n';
}

Shape* addShape(std::string& fileSave)
{
	drawShapeMenu();
	int n;
	std::cin >> n;
	fileSave += n;

	switch (n)
	{
	case 1:		// 삼각형 추가
		std::cout << "삼각형 생성" << '\n';
		return new Triangle();

	case 2:		// 사각형 추가
		std::cout << "사각형 생성" << '\n';
		return new Rectangle();

	case 3:		// 원 추가
		std::cout << "원 생성" << '\n';
		return new Circle();
	}
}

void Delete()
{
	
	std::cout << "(1) - n번째 도형 지우기" << '\n';
	std::cout << "(2) - 특정 도형 지우기" << '\n';
}

int D_Number(ShapeManager& sm, std::string& fileSave)
{
	sm.draw();
	int num;
	std::cout << "몇 번째 도형을 제거할까요? - ";
	std::cin >> num;
	fileSave += num;

	return num;
}

void D_Shape()
{
	std::cout << "어떤 도형을 제거할까요? - ";
}
