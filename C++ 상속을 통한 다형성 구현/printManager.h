//-------------------------------------------------------
// 출력 문구 관리
//-------------------------------------------------------
#pragma once
#include "ShapeManager.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"

void Start();		// 프로그램 시작 문구

void drawEnd();		// 프로그램 종료 문구

void drawMenu();	// 메뉴 문구

void drawShapeMenu(); // 도형 메뉴 문구

Shape* addShape(std::string&);

void Delete();		// 도형 제거 문구 선택

int D_Number(ShapeManager&, std::string&);	// n번째 도형 제거

void D_Shape();		// 특정 모양 도형 제거

