#include <iostream>
using namespace std;

class Point
{
public:
	// 멤버 함수
	void Print();

	// 생성자들
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	// 접근자
	void SetX(int value)
	{
		if (value < 0)
			x = 0;
		else if (value > 100)
			x = 100;
		else
			x = value;
	}
	void SetY(int value) 
	{
		if (value < 0)
			y = 0;
		else if (value > 100)
			y = 100;
		else
			y = value;
	}
	int GetX() { return x; };
	int GetY() { return y; };

private:
	// 멤버 변수
	int x, y;
};

Point::Point(const Point& pt)
{
	cout << "복사 생성자 호출됨!!\n";
	x = pt.x;
	y = pt.y;
}

Point::Point(int initialX, int initialY)
{
	SetX(initialX);
	SetY(initialY);
}
Point::Point()
{
	x = 0;
	y = 0;
}

void Point::Print()
{
	cout << "( " << x << ", " << y << ")\n";
}
/*
void Area(const Point& pt)
{
	int area = pt.x * pt.y;

	cout << "(0, 0)과 이루는 사각형의 면적 = " << area << "\n";
}
*/
int main()
{
	Point pt(-50, 200);
	pt.Print();

	// int x = 5;
	// int y = 7;

	//예제 21-13 새로운 객체를 만들어서 전달하기
	// Point temp(x, y);

	//예제 21-14 임시 객체를 전달하기
	// Area(Point(x, y));


	return 0;
}
