#include "./brainCpp_ch22-1-Rect.h"
#include <iostream>
using namespace std;

int main()
{
	// Rect ��ü ����
	Rect rc1;

	// ���� ���
	rc1.Print();

	// �� �ٲٱ�
	rc1.SetRect(10, 20, 30, 40);

	// ���� ���
	rc1.Print();

	// �� �ٲٱ�2
	rc1.SetTopLeft(Point(20, 20));

	// ���� ���
	rc1.Print();

	// ����, ���� ���
	cout << "rc1.GetWidth() = " << rc1.GetWidth() << "\n";
	cout << "rc1.GetHeight() = " << rc1.GetHeight() << "\n";

	return 0;
}