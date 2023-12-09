//----------------------------------------------------------------------------------
// ���� ���� Ŭ���� - ���� ���� ������ ������
//----------------------------------------------------------------------------------
#include "shape.h"

#pragma once
class ShapeManager {
	int nShape;		// ������ ����
	int capacity;	// �ִ� �뷮
	Shape** shapes;	// ������ �����͸� ���� �޸�
public:
	explicit ShapeManager(int n);		//���� �� �ִ� ������ ������ �����ڿ� ����

	~ShapeManager();

	void insert(Shape*);	// ������ �߰��ϴ� �Լ�
	void draw() const;		// ��ü ������ �׸��� �Լ�

	void erase(int);
};