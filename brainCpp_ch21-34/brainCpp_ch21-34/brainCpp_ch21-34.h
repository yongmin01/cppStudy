#ifndef POINT_H
#define POINT_H

class Point
{
public:
	// 예제 21-42 열거체를 클래스 범위의 상수로 사용하기
	enum { MIN_X = 0, MAX_X = 100, MIN_Y = 0, MAX_Y = 100 };

	// 예제 21-43 클래스 안에서 정의하는 typedef
	typedef int COOR_T; // int 타입을 COOR_T로 재정의

	// 멤버 함수
	void Print() const;
	// 예제 21-36 오버로드한 멤버 함수의 추가
	void Offset(COOR_T x_delta, COOR_T y_delta);
	void Offset(const Point& pt);

	// 생성자들
	Point();
	Point(COOR_T initialX, COOR_T initialY);
	Point(const Point& pt);

	// 접근자
	void SetX(COOR_T value);
	void SetY(COOR_T value);
	int GetX() const { return x; }; 
	int GetY() { return y; }; // GetY()는 Const 함수가 아님

private:
	// 멤버 변수
	COOR_T x, y;
};

inline void Point::SetX(COOR_T value)
{
	if (value < MIN_X)
		x = MIN_X;
	else if (value > MAX_X)
		x = MAX_X;
	else
		x = value;
}

inline void Point::SetY(COOR_T value)
{
	if (value < MIN_Y)
		y = MIN_Y;
	else if (value > MAX_Y)
		y = MAX_Y;
	else
		y = value;
}
#endif