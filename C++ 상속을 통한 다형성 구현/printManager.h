//-------------------------------------------------------
// ��� ���� ����
//-------------------------------------------------------
#pragma once
#include "ShapeManager.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"

void Start();		// ���α׷� ���� ����

void drawEnd();		// ���α׷� ���� ����

void drawMenu();	// �޴� ����

void drawShapeMenu(); // ���� �޴� ����

Shape* addShape(std::string&);

void Delete();		// ���� ���� ���� ����

int D_Number(ShapeManager&, std::string&);	// n��° ���� ����

void D_Shape();		// Ư�� ��� ���� ����

