//--------------------------------------------------------------------------------------
// 2차원 좌표 (x,y)를 나타낸다
//--------------------------------------------------------------------------------------
#pragma once
#ifndef _Point
#define _Point

struct Point
{
	double x, y;

	Point();
	Point(int, int);
	Point(double, double);
	Point(const Point&) = default;		// 사용자가 만들 필요 없다.
};

#endif