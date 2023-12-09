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
		case 1:		// ���ϴ� ���� �߰�
			std::cout << "(1) - �ﰢ��" << '\n';
			std::cout << "(2) - �簢��" << '\n';
			std::cout << "(3) - ��" << '\n';
			int put;
			std::cin >> put;
			switch (put)
			{
			case 1:		// �ﰢ�� �߰�
				sm.insert(new Triangle());
				std::cout << "�ﰢ�� ����" << '\n';
				return put;
			case 2:		// �簢�� �߰�
				sm.insert(new Rectangle());
				std::cout << "�簢�� ����" << '\n';
				return put;
			case 3:		// �� �߰�
				sm.insert(new Circle());
				std::cout << "�� ����" << '\n';
				return put;
			}
		case 2:		// ��ü ���� �׸���
			sm.draw();
			return put;
		case 3:		// ���� ����
			Delete();		// ���� ���� ����
			int n;
			std::cin >> n;
			switch (n)
			{
			case 1:		// n��° ���� �����
				sm.erase(D_Number(sm));
				return n;
			case 2:		// Ư�� ���� �����
				D_Shape();
				return n;
			}

		case 4:		// ���α׷� ������
			drawEnd();
			break;
		}
		n = 0;
	}
	return 0;
}