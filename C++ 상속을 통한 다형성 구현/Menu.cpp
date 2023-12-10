#include <iostream>
#include <fstream>
#include <string>
#include "circle.h"
#include "point.h"
#include "rectangle.h"
#include "shape.h"
#include "ShapeManager.h"
#include "printManager.h"
#include "triangle.h"

int StartMenu(ShapeManager& sm)
{
	std::string fileSave;
	int n;
	while (n!=0) {
		int user;
		drawMenu();
		std::cin >> user;

		if (user < 1 || user>5) {
			drawEnd();
			break;
		}

		switch (user)
		{
		case 1:		// 원하는 도형 추가
			fileSave += 1;
			sm.insert(addShape(fileSave));
			break;
		case 2:		// 전체 도형 그리기
			sm.draw();
			break;
		case 3:		// 도형 제거
			fileSave += 3;
			Delete();		// 도형 제거 문구
			int in;
			std::cin >> in;
			fileSave += in;

			switch (in)
			{
			case 1:		// n번째 도형 지우기
				sm.erase(D_Number(sm, fileSave));
				break;
			case 2:		// 특정 도형 지우기
				D_Shape();
				break;
			}
			break;

		case 4:		// 프로그램 끝내기
			drawEnd();
			return 0;

		case 5:
			std::cout << "\t[1] - 저장\n";
			std::cout << "\t[2] - 불러오기\n";
			int in2;
			std::cin >> in2;

			// 저장
			if (in2 == 1) {
				std::ofstream out("shapeInfo.txt");
				out << fileSave;
				std::cout << "저장 성공!\n";
			}
			else if (in2 == 2) {
				std::ifstream in("shapeInfo.txt");
				std::string str;
				in >> str;
				// 1 1 2 3 124141231
				std::string result;

				for (char c : str) {
					result += c;
					result += ' ';
				}
				
				for (int i = 0; i < sm.getnShape(); ++i) {
					sm.erase(i);
				}
				std::cin >> result ;

			}

		default:
			break;
		}
	}
	return n;
}