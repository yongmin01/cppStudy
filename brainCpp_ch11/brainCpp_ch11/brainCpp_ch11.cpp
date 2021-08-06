#include <iostream>
using namespace std;

int main() {
	/*
	// 예제 11-1 변수의 주소
	char c = 'B';
	int i = 19;
	float f = 4.5f;

	cout << "c의 주소 = " << (int*)&c << "\n";
	cout << "i의 주소 = " << &i << "\n";
	cout << "f의 주소 = " << &f << "\n\n";

	// 예제 11-2 변수 a를 가리키는 포인터
	int a = 123;

	int* p;
	p = &a;
	
	cout << "&a = " << &a << "\n";
	cout << "p = " << p << "\n";
	cout << "&p = " << &p << "\n";
	

	// 예제 11-3 여러가지 타입의 포인터
	int i = 300;
	int* pi = &i;

	char c = 'C';
	char* pc = &c;
	
	float f = 700.5f;
	float* pf = &f;

	bool b = true;
	bool* pb = &b;

	short int s = 456;
	short int* ps = &s;

	// int ex = 10;
	// unsigned int* = &ex; // unsiged int 타입의 포인터 변수가 int 타입의 변수를 가리킬 수 없다
	
	

	// 예제 11-4 void 포인터의 사용
	int i = 400;
	void* pv = &i; // void 포인터는 원래 아무 타입이나 가리킬 수 있으므로 형변환없이도 &i의 값 보관 가능
	int* pi = (int*)pv; //void* 타입을 int* 타입으로 형변환

	cout << "sizeof(void*) = " << sizeof(pv) << "\n"; //void 타입의 포인터 변수 크기

	// 예제 11-5 정보에 접근하는 방법
	int a = 123;
	int* p = &a;

	cout << "*p = " << *p << "\n";
	*p = 789;

	cout << "a = " << a << "\n";
	cout << "*p = " << *p << "\n";
	

	// 예제 11-6 포인터의 동작 방식 확인
	int i = 0x12345678;
	
	char* pc = (char*)&i;

	cout << hex; // 정수를 16진수로 출력하게 만듦
	cout << "*pc = " << (int) *pc << "\n";
	
	// 예제 11-7 일반적인 포인터 사용 방법
	int* p = 0;
	if (0 != p) {
		*p = 30;
	}
	int a = 100;
	p = &a;

	if (p) {
		*p = 30;
	}
	

	// 예제 11-7 NULL의 사용
	int* p = NULL;
	if (NULL != p) {
		*p = 30;
	}
	int a = 100;
	p = &a;

	if (p) {
		*p = 30;
	}
	

	// 예제 11-9 기본 타입과 Const
	const int a = 123;
	a = 456;
	

	// 예제 11-10 상수 대신에 const 속성의 변수 사용
	const unsigned int arraySize = 100;
	
	char characters[arraySize] = { 0 };
	for (int i = 0; i < arraySize; ++i)
		characters[i] = i + 1;

	// 예제 11-11 const 속성이 전혀 적용되지 않은 포인터
	int i1 = 10;
	int i2 = 20;
	int* p = &i1;

	p = &i2;
	*p = 30;
	

	// 예제 11-12 포인터가 가리키는 변수가 const인 경우
	int i1 = 10;
	int i2 = 20;
	const int* p = &i1;

	p = &i2; // OK
	*p = 30; // FAIL
	

	// 예제 11-13 포인터 자체가 const인 경우
	int i1 = 10;
	int i2 = 20;
	int* const p = &i1;

	p = &i2; // FAIL
	*p = 30; // OK
	

	// 예제 11-14 두 군데 모두 const인 경우
	int i1 = 10;
	int i2 = 20;
	const int* const p = &i1;

	p = &i2; // FAIL
	*p = 30; // FAIL
	*/

	int a = 2580;
	const int* p1 = &a;
	int cosnt* p2 = &a;
	int* const p3 = &a;

	*p1 = 1234;
	*p2 = 2345;
	*p3 = 3456;
	return 0;
}