#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	a = 100;
	b = 200;
	c = 300;
	cout << a << ", "  << b << ", " << c << "\n";

	int d = 1000, e = 2000;
	cout << "d = " << d << ", e = " << e << "\n";

	d = e;
	cout << "d = " << d << ". e = " << e << "\n";

	// 성적표 프로그램
	int class_number = 5; // 반
	int student_number = 45; // 번호

	int korean_score = 90; // 국어점수
	int english_score = 100; // 영어 점수
	int math_score = 80; // 수학점수

	int total_score = 270; // 총점
	int average = 90; // 평균

	cout << "반 번호 국어 영어 수학 총점 평균\n";
	cout << class_number << "  " << student_number << "  "
		<< korean_score << "  " << english_score << "  "
		<< math_score << "  " << total_score << "  " << average << "\n";

	a = 1, b = 2, c = 3, d = 4, e = 5;
	cout << "    1\n" << "   12\n" << "  123\n" << " 1234\n" << "12345\n";

	return 0;
}