#include <iostream>
using namespace std;

int main() {
	short int si;
	unsigned short int usi;
	int i;
	unsigned int ui;
	long int li;
	unsigned long ul;

	// 작은 값을 대입
	si = 40000;
	usi = 40000;
	i = 4000;
	ui = 4000;
	li = 4000;
	ul = 4000;

	// 조금 더 큰 값을 대입
	si = 70000;
	usi = 70000;
	i = 70000;
	ui = 70000;
	li = 70000;
	ul = 70000;

	// 더 큰 값을 대입
	si = 2200000000;
	i = 2200000000;
	li = 2200000000;
	usi = 2200000000;
	ui = 2200000000;
	ul = 2200000000;

	// unsigned int와 unsigned long int의 한계는 어디?
	ui = 4300000000;
	ul = 4300000000;

	// 음수를 대입
	si = -100;
	usi = -100;
	i = -100;
	ui = -100;
	li = -100;
	ul = -100;
	
	// 예제 5-2 타입의 크기를 알아보는 방법
	cout << "short int : " << sizeof(short int) << " bytes\n";
	cout << "unsigned short int : " << sizeof(unsigned short int) << " bytes\n";
	cout << "int : " << sizeof(int) << " bytes\n";
	cout << "unsigned int : " << sizeof(unsigned int) << " bytes\n";
	cout << "long int : " << sizeof(long int) << " bytes\n";
	cout << "unsigned long int : " << sizeof(unsigned long int) << " bytes\n";

	// 예제 5-3 10, 8, 16진수의 사용
	int decimal = 41; // 10진수
	int octal = 041; // 8진수
	int hexadecimal = 0x41; // 16진수

	cout << "41 = " << decimal << "\n";
	cout << "041 = " << octal << "\n";
	cout << "0x41 = " << hexadecimal << "\n";
	
	// 예제 5-4 실수 타입의 사용
	// 실수 타입 변수 정의
	float f;
	double d;
	long double ld;

	// 변수에 실수 값을 대입 - 1
	f = 0.00123;
	d = 1.23;
	ld = 123.0;

	// 변수에 실수 값을 대입 - 2
	f = 1.23E-3f;
	d = 1 / 23E0;
	ld = 1.23E2;

	return 0;
 	
}