#include <iostream>
#include "circle.h"
#include "point.h"
#include "rectangle.h"
#include "shape.h"
#include "ShapeManager.h"
#include "printManager.h"
#include "triangle.h"

int StartMenu(ShapeManager& sm)
{
	int n;
	while (n!=0) {
		int user;
		drawMenu();
		std::cin >> user;

		if (user < 1 || user>4)
			break;

		switch (user)
		{
		case 1:		// 원하는 도형 추가
			std::cout << "(1) - 삼각형" << '\n';
			std::cout << "(2) - 사각형" << '\n';
			std::cout << "(3) - 원" << '\n';
			int put;
			std::cin >> put;
			switch (put)
			{
			case 1:		// 삼각형 추가
				sm.insert(new Triangle());
				std::cout << "삼각형 생성" << '\n';
				return put;
			case 2:		// 사각형 추가
				sm.insert(new Rectangle());
				std::cout << "사각형 생성" << '\n';
				return put;
			case 3:		// 원 추가
				sm.insert(new Circle());
				std::cout << "원 생성" << '\n';
				return put;
			}
		case 2:		// 전체 도형 그리기
			sm.draw();
			return put;
		case 3:		// 도형 제거
			Delete();		// 도형 제거 문구
			int n;
			std::cin >> n;
			switch (n)
			{
			case 1:		// n번째 도형 지우기
				sm.erase(D_Number(sm));
				return n;
			case 2:		// 특정 도형 지우기
				D_Shape();
				return n;
			}

		case 4:		// 프로그램 끝내기
			drawEnd();
			break;
		}
		n = 0;
	}
	return 0;
}