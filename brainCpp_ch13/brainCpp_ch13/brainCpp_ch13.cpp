#include <iostream>
#include <bitset> // 예제 13-5 16비트 칼라의 한 점에서 파란색만 추출
using namespace std;
/*
//예제 13-1 공용체의 특징 확인
union MyUnion
{
	int i;
	void* p;
};

// exercise 13-1
union UNI
{
	int a;
	char b;
} uni2;

// 예제 13-2 열거체의 사용 1
enum { JOB_DWARF, JOB_WARRIOR, JOB_SORCERER };

struct Character
{
	int jobType;
};

// 예제 13-3 열거체의 사용 2
enum JOB_KINDS { JOB_DWARF, JOB_WARRIOR, JOB_SORCERER };

struct Character
{
	JOB_KINDS jobType;
};
*/
// 예제 13-5 16비트 칼라의 한 점에서 파란색만 추출
struct Pixel16 // 16비트 칼라에서의 한 점을 나타내는 구조체
{
	unsigned int blue : 5;
	unsigned int green : 6;
	unsigned int red : 5;
};
union Convert16 // unsigned short 타입의 값을 Pixel16 구조체 값으로 변환하기 위한 용도로 만든 공용체
{
	Pixel16 pixel;
	unsigned short us;
};

int main() {
	/*
	//예제 13-1 공용체의 특징 확인
	MyUnion uni;

	cout << "&uni.i = " << &uni.i << "\n";
	cout << "&uni.p = " << &uni.p << "\n\n";

	uni.i = 0x12345678;
	cout << hex;
	cout << "uni.i = " << uni.i << "\n";
	cout << "&uni.p = " << uni.p << "\n\n";

	uni.p = (void*)0x87654321;
	cout << "&uni.i = " << uni.i << "\n";
	cout << "&uni.p = " << uni.p << "\n";

	// exercise 13-1
	uni2.a = 0x12345678;
	uni2.b = 0x90;
	
	cout << uni2.a << "\n";
	
	// 예제 13-2 열거체의 사용 1
	Character c;
	//c가 누군가에 의해 초기화된다.

	if (JOB_SORCERER == c.jobType)
	{
		// 필요한 일을 한다.
	}

	// 예제 13-3 열거체의 사용 2
	Character c;
	// c가 누군가에 의해 초기화된다.

	// c가 마법사인 경우
	if (JOB_SORCERER == c.jobType)
	{
		// 필요한 일을 한다.
	}
	

	// 예제 13-4 레퍼런스의 기본적인 사용
	int target = 20;
	int& ref = target;

	cout << "ref    = " << ref << "\n";
	cout << "target = " << target << "\n";
	cout << "&ref    = " << &ref << "\n";
	cout << "&target = " << &target << "\n";

	ref = 100;

	cout << "ref    =" << ref << "\n";
	cout << "target =" << target << "\n";
	*/
	
	// 예제 13-5 16비트 칼라의 한 점에서 파란색만 추출
	unsigned short color = 0x1234;

	Convert16 convert;
	convert.us = color;

	cout << "color = " << bitset<16>(color) << "(" << color << ")\n";
	cout << "blue  = " << bitset<16>(convert.pixel.blue) << "(" << convert.pixel.blue << ")\n";

	return 0;
}