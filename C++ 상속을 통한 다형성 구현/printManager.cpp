#include <iostream>
#include "ShapeManager.h"

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
	std::cout << "[1] - ���ϴ� ���� �߰�" << '\n';
	std::cout << "[2] - ��ü ���� �׸���" << '\n';
	std::cout << "[3] - ���� �����" << '\n';
	std::cout << "[4] - ���α׷� ������" << '\n';
}

void Delete()
{
	
	std::cout << "(1) - n��° ���� �����" << '\n';
	std::cout << "(2) - Ư�� ���� �����" << '\n';
}

int D_Number(ShapeManager& sm)
{
	sm.draw();
	int num;
	std::cout << "�� ��° ������ �����ұ��? - ";
	std::cin >> num;
	return num;
}

void D_Shape()
{
	std::cout << "� ������ �����ұ��? - ";
}
