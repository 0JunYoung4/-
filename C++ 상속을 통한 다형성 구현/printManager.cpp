#include <iostream>
#include <string>
#include "ShapeManager.h"
#include "printManager.h"

void Start()
{
	std::cout << "----------------------" << '\n';
	std::cout << "���α׷��� �����մϴ�" << '\n';
	std::cout << "----------------------" << "\n\n";

	std::cout << "������ ������ ���� - ";
}


void drawEnd()
{
	std::cout << "\n----------------------" << '\n';
	std::cout << "���α׷��� �����մϴ�" << '\n';
	std::cout << "----------------------" << '\n';
}

void drawMenu()
{
	std::cout << '\n' << "Menu" << "\n\n";
	std::cout << "[1] - ���ϴ� ���� �߰�"	<< '\n';
	std::cout << "[2] - ��ü ���� �׸���"	<< '\n';
	std::cout << "[3] - ���� �����"		<< '\n';
	std::cout << "[4] - ���α׷� ������"	<< '\n';
	std::cout << "[5] - ����"				<< '\n';
}

void drawShapeMenu()
{
	std::cout << "(1) - �ﰢ��" << '\n';
	std::cout << "(2) - �簢��" << '\n';
	std::cout << "(3) - ��" << '\n';
}

Shape* addShape(std::string& fileSave)
{
	drawShapeMenu();
	int n;
	std::cin >> n;
	fileSave += n;

	switch (n)
	{
	case 1:		// �ﰢ�� �߰�
		std::cout << "�ﰢ�� ����" << '\n';
		return new Triangle();

	case 2:		// �簢�� �߰�
		std::cout << "�簢�� ����" << '\n';
		return new Rectangle();

	case 3:		// �� �߰�
		std::cout << "�� ����" << '\n';
		return new Circle();
	}
}

void Delete()
{
	
	std::cout << "(1) - n��° ���� �����" << '\n';
	std::cout << "(2) - Ư�� ���� �����" << '\n';
}

int D_Number(ShapeManager& sm, std::string& fileSave)
{
	sm.draw();
	int num;
	std::cout << "�� ��° ������ �����ұ��? - ";
	std::cin >> num;
	fileSave += num;

	return num;
}

void D_Shape()
{
	std::cout << "� ������ �����ұ��? - ";
}
