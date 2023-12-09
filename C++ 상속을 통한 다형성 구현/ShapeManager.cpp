//----------------------------------------------------------------------------------
// ���� ���� Ŭ���� - ���� ���� ������ ������
//----------------------------------------------------------------------------------
#include <iostream>
#include "ShapeManager.h"

ShapeManager::ShapeManager(int n)
{
	nShape = 0;
	capacity = n;
	shapes = new Shape* [capacity];
	//std::cout << "�Ŵ��� ����" << '\n';
}

ShapeManager::~ShapeManager()
{
	for (int i = 0; i < nShape; ++i) {
		delete shapes[i];
	
	}
	delete[] shapes;
	//std::cout << "�Ŵ��� �Ҹ�" << '\n';
	
	
}

void ShapeManager::insert(Shape* a)
{
	shapes[nShape] = a;
	++nShape;
}


void ShapeManager::draw() const
{
	std::cout << "---------------------------------------------------" << '\n';
	std::cout << "�����ϴ� ��� ������ �׸��ϴ�" << '\n';
	std::cout << "�ִ� " << capacity << "���� ������ ���� �� �ֽ��ϴ�" << '\n';
	std::cout << "��� " << nShape << "���� ������ �ֽ��ϴ�" << '\n';
	std::cout << "---------------------------------------------------" << "\n\n";

	for (int i = 0; i < nShape; ++i) {
		std::cout << '[' << i << "]  ";
		shapes[i]->draw();
	}

	std::cout << "\n---------------------------------------------------" << '\n';
	std::cout << "�׸��⸦ ��Ĩ�ϴ�" << '\n';
	std::cout << "---------------------------------------------------" << '\n';
}

void ShapeManager::erase(int n)
{
	if (n < 0 || n >= nShape) {
		std::cout << "�ش� ��ȣ�� ������ �����ϴ�" << '\n';
		return;
	}

	delete shapes[n];
	for (int i = n; i < nShape-1; ++i) {
		shapes[i] = shapes[i + 1];
	}
	--nShape;
}