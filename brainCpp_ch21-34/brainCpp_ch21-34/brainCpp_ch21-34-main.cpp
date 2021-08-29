#include "brainCpp_ch21-34.h"
#include <iostream>
using namespace std;


// ���� 21-34 Const �Լ��� ������� ���� ����� ������
//void Area(const Point& pt);

// ���� 21-35 ��� �Լ��� ���� ������
// void XX() ������ �Լ��� ���� ������
typedef void (*FP1) (int);
// void Point::XX() ������ ��� �Լ��� ���� ������
typedef void (Point::* FP2) (int);



int main()
{
	Point pt(50, 50);

	/*
	// ���� 21-34 Const �Լ��� ������� ���� ����� ������
	Area(pt);
	*/

	/* 
	// ���� 21-35 ��� �Լ��� ���� ������
	// FP1 fp1 = &Point::SetX;
	FP2 fp2 = &Point::SetX;

	// �Լ� �����͸� ����ؼ� �Լ� ȣ��
	(pt.*fp2)(100);
	pt.Print();
	*/
	// ���� 21-36 �����ε��� ��� �Լ��� �߰�
	cout << "\n���� 21-36 �����ε��� ��� �Լ��� �߰�\n";
	Point delta(100, 100); 

	pt.Offset(10, -10);
	pt.Print();

	pt.Offset(delta);
	pt.Print();

	// ���� 21-37 ��ü�� �迭
	cout << "\n���� 21-37 ��ü�� �迭\n";
	Point arr1[3];
	for (int i = 0; i < 3; ++i)
		arr1[i].Print();

	// ���� 21-38 ��ü�� �迭 �ʱ�ȭ
	cout << "\n���� 21-38 ��ü�� �迭 �ʱ�ȭ\n";
	Point arr2[3] = { Point(100, 100), Point(50, 100), Point(10, 10) };
	for (int i = 0; i < 3; ++i)
		arr2[i].Print();

	// ���� 21-39 ������ ��ü ����
	cout << "\n���� 21-39 ������ ��ü ����\n";
	Point pt2(50, 50);
	Point* p1 = new Point();
	Point* p2 = new Point(100, 100);
	Point* p3 = new Point(pt2);

	p1->Print();
	p2->Print();
	p3->Print();

	delete p1;
	delete p2;
	delete p3;
	p1 = p2 = p3 = 0;

	return 0;
}



// ���� 21-34 Const �Լ��� ������� ���� ����� ������
/*
void Area(const Point& pt)
{
	int area = pt.GetX() * pt.GetY(); // pt�� Const ��ü�� ������ Const �Լ��� �ƴ� GetY�� ȣ���� �� ���� -> ����

	cout << "(0, 0)�� �� ���� �̷�� �簢���� ���� = " << area << "\n";
}
*/