#include <iostream>
using namespace std;

// 예제 10-1 구조체의 정의
struct StudentInfo {
	char bloodType;
	int stdNumber;
	float grade;
};

int main() {
	/*
	StudentInfo si1;
	StudentInfo si2;

	// 예제 10-2 구조체의 멤버에 접근하는 법
	
	si1.bloodType = 'O';
	si1.stdNumber = 20031128;
	si1.grade = 3.5f;

	si2.bloodType = 'A';
	si2.stdNumber = 19961219;
	si2.grade = 2.3f;
	*/

	// 예제 10-3 구조체의 초기화
	StudentInfo si1 = { 'O', 20031128, 3.5f };
	StudentInfo si2 = { 'A', 19961219, 2.3f };

	cout << "학번 : " << si1.stdNumber << "\n";
	cout << "학점 : " << si1.grade << "\n";
	cout << "혈액형 : " << si1.bloodType << "\n\n";
	cout << "학번 : " << si2.stdNumber << "\n";
	cout << "학점 : " << si2.grade << "\n";
	cout << "혈액형 : " << si2.bloodType << "\n\n";

	/*
	// 예제 10-4 구조체의 대입
	struct Point {
		int x;
		int y;
	}; // main()함수 안에서 구조체 정의

	Point pt1 = { 30, 50 };
	Point pt2;

	pt2 = pt1;

	cout << "pt1 = ( " << pt1.x << "," << pt1.y << ")\n";
	cout << "pt2 = ( " << pt2.x << "," << pt2.y << ")\n";
	*/

	// 예제 10-5 구조체와 변수의 정의를 동시에 하는 법
	struct Point {
		int x;
		int y;
	} pt1 = { 30, 50 }, pt2;

	pt2 = pt1;

	cout << "pt1 = ( " << pt1.x << "," << pt1.y << ")\n";
	cout << "pt2 = ( " << pt2.x << "," << pt2.y << ")\n";

	return 0;
}