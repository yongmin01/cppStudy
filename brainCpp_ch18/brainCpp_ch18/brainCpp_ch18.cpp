#include <iostream>
#include <cmath>
using namespace std;

// 예제 18-1 두 점의 거리 구하기, 18-2 헤더 파일의 추가
/*
struct Point
{
	int x, y;
};

double Distance(Point p1, Point p2);
*/
#include "brainCpp_ch18_18-2.h"

int main() 
{
	Point a = { 0, 0 };
	Point b = { 3, 4 };

	double dist_a_b = Distance(a, b);

	cout << "(" << a.x << ", " << a.y << ") 와";
	cout << "(" << b.x << ", " << b.y << ") 의 거리 = " << dist_a_b << "\n";

	return 0;
}


// 예제 18-1 두 점의 거리 구하기
double Distance(Point p1, Point p2)
{
	double distance;
	distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

	return distance;
}