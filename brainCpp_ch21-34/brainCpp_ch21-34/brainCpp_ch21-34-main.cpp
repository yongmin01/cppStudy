#include "brainCpp_ch21-34.h"
#include <iostream>
using namespace std;


// 예제 21-34 Const 함수를 사용하지 않은 경우의 문제점
//void Area(const Point& pt);

// 예제 21-35 멤버 함수에 대한 포인터
// void XX() 형태의 함수에 대한 포인터
typedef void (*FP1) (int);
// void Point::XX() 형태의 멤버 함수에 대한 포인터
typedef void (Point::* FP2) (int);



int main()
{
	Point pt(50, 50);

	/*
	// 예제 21-34 Const 함수를 사용하지 않은 경우의 문제점
	Area(pt);
	*/

	/* 
	// 예제 21-35 멤버 함수에 대한 포인터
	// FP1 fp1 = &Point::SetX;
	FP2 fp2 = &Point::SetX;

	// 함수 포인터를 사용해서 함수 호출
	(pt.*fp2)(100);
	pt.Print();
	*/
	// 예제 21-36 오버로드한 멤버 함수의 추가
	cout << "\n예제 21-36 오버로드한 멤버 함수의 추가\n";
	Point delta(100, 100); 

	pt.Offset(10, -10);
	pt.Print();

	pt.Offset(delta);
	pt.Print();

	// 예제 21-37 객체의 배열
	cout << "\n예제 21-37 객체의 배열\n";
	Point arr1[3];
	for (int i = 0; i < 3; ++i)
		arr1[i].Print();

	// 예제 21-38 객체의 배열 초기화
	cout << "\n예제 21-38 객체의 배열 초기화\n";
	Point arr2[3] = { Point(100, 100), Point(50, 100), Point(10, 10) };
	for (int i = 0; i < 3; ++i)
		arr2[i].Print();

	// 예제 21-39 동적인 객체 생성
	cout << "\n예제 21-39 동적인 객체 생성\n";
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



// 예제 21-34 Const 함수를 사용하지 않은 경우의 문제점
/*
void Area(const Point& pt)
{
	int area = pt.GetX() * pt.GetY(); // pt가 Const 객체기 때문에 Const 함수가 아닌 GetY를 호출할 수 없음 -> 오류

	cout << "(0, 0)과 이 점이 이루는 사각형의 면적 = " << area << "\n";
}
*/