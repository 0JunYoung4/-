#include <iostream>
#include "circle.h"
#include "point.h"
#include "rectangle.h"
#include "shape.h"
#include "ShapeManager.h"
#include "printManager.h"
#include "Menu.h"
#include "triangle.h"

int main()
{
	int num;
	Start();
	std::cin >> num;

	ShapeManager sm(num);		// 관리할 도형의 개수
	int n;
	while (n != 0) {
		n = StartMenu(sm);
	}
	

	

	/*sm.insert(new Circle(Point(1, 2), 4));
	sm.insert(new Rectangle(Point(1, 5), Point(4, 4)));*/
	/*for (int i = 0; i < 10; ++i) {
		sm.insert(new Rectangle(Point(i, i + 4), Point(i + 2, i + 8)));
	}*/
	
	
	
}