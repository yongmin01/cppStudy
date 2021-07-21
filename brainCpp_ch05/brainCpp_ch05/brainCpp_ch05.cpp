#include <iostream>
using namespace std;

int main() {
	/*
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

	// 예제 5-5 char 타입의 사용
	char a;
	char b;
	char c;

	a = 'G';
	b = 'O';
	c = 'D';

	cout << a << b << c << "\n";

	// 예제 5-6 아스키 코드 값 확인
	int A = 'A';
	cout << A << "\n";
	
	b = 65;
	cout << b << "\n";

	// 예제 5-7 이스케이프 문자열 사용
	cout << "Hello, Works";
	cout << "\b\b";
	cout << "ld!\n";

	// 예제 5-8 bool 타입 사용
	bool b1;
	bool b2;

	b1 = true;
	b2 = false;

	cout << "b1 = " << b1 << "\n";
	cout << "b2 = " << b2 << "\n";
	

	// 예제 5-9 기본 타입간의 형변환
	int i = 65;
	float f = 66.89f;
	char c = 'C';
	bool b = true;

	int f2i, c2i, b2i;
	float i2f, c2f, b2f;
	char i2c, f2c, b2c;
	bool i2b, f2b, c2b;

	i2f = i; // int -> float
	i2c = i; // int -> char
	i2b = i; // int -> bool

	f2i = f; // float -> int
	f2c = f; // float -> char
	f2b = f; // float -> bool

	c2i = c; // char -> int
	c2f = c; // char -> float
	c2b = c; // char -> bool

	b2i = b; // bool -> int
	b2f = b; // bool -> float
	b2c = b; // bool -> char
	
	cout << "int : " << i << "\n\tto float : " << i2f << "\n\tto char : " << i2c << "\n\tto bool : " << i2b << "\n\n";
	cout << "float : " << f << "\n\tto int : " << f2i << "\n\tto char : " << f2c << "\n\tto bool : " << f2b << "\n\n";
	cout << "char : " << c << "\n\tto int : " << c2i << "\n\tto float : " << c2f << "\n\tto bool : " << c2b << "\n\n";
	cout << "bool : " << b << "\n\tto int : " << b2i << "\n\tto float : " << b2f << "\n\tto char : " << b2c << "\n\n";
	*/

	// 예제 5-10 문제가 생기는 형변환
	// 정수 타입간의 형변환
	int i = 131071;
	unsigned short i2us = i; // int -> unsigned short
	short i2s = i; // int -> short

	// 실수 타입간의 형변환
	double d = 12345678901234.56789;
	float d2f = d; // double -> float

	// 실수 타입에서 정수 타입으로 형변환
	float f = 76543.21f;
	short f2s = f; // float -> short

	// 정수 타입에서 실수 타입으로 형변환
	int big_i = 1234567890;
	float i2f = big_i; // int -> float

	cout << fixed;
	cout << "int : " << i << "\n\tto unsigned short : " << i2us << "\n\tto short : " << i2s << "\n\n";
	cout << "double : " << d << "\n\tto float : " << d2f << "\n\n";
	cout << "float : " << f << "\n\tto short : " << f2s << "\n\n";
	cout << "int : " << big_i << "\n\ttp float : " << i2f << "\n\n";


	return 0;
 	
}