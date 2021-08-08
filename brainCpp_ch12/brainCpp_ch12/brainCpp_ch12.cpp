#include <iostream>
using namespace std;

// 예제 12-8 배열을 포함하는 구조체
struct StudentInfo
{
	char name[20];
	int stdNumber;
	float grade[2];
};

// 예제 12-10 구조체를 가리키는 포인터
struct Rectangle
{
	int x, y;
	int width, height;
};

// 예제 12-11 포인터를 포함하는 구조체
struct IHaveAPointer
{
	int x, y;
	long* pl;
};

//예제 12-12 서로를 가리키는 구조체 변수들
struct Dizzy
{
	int id;
	Dizzy* p;
};

int main() {
	/*
	// 예제 12-1 포인터에 1을 더하는 것의 의미
	int array[10];

	int* p = &array[5];

	cout << "p = " << p << "\n";
	cout << "&array[5] = " << &array[5] << "\n";

	p++;

	cout << "p = " << p << "\n";
	cout << "&array[6] = " << &array[6] << "\n\n";

	// 예제 12-2 포인터의 덧셈과 뺄셈
	int iArray[10];
	int* pi = &iArray[3];

	cout << "pi = " << pi << "\n";
	cout << "pi + 1 = " << pi + 1 << "\n";
	cout << "pi + 2 = " << pi + 2 << "\n";
	cout << "pi - 1 = " << pi - 1 << "\n";

	short sArray[10];
	short* ps = &sArray[3];

	cout << "ps = " << ps << "\n";
	cout << "ps + 1 = " << ps + 1 << "\n";
	cout << "ps + 2 = " << ps + 2 << "\n";
	cout << "ps - 1 = " << ps - 1 << "\n\n";

	// 예제 12-3 포인터간의 뺄셈
	short sArrays[10];
	short* ps1 = &sArrays[3];
	short* ps2 = &sArrays[7];

	cout << "ps1 = " << ps1 << "\n";
	cout << "ps2 = " << ps2 << "\n";
	cout << "ps2 - ps1 = " << ps2 - ps1 << "\n";
	

	// 예제 12-4 간단한 배열의 탐색
	int nArray[10];

	for (int i = 0; i < 10; ++i)
	{
		nArray[i] = i;
	}
	
	// 예제 12-5 포인터의 덧셈을 사용한 배열의 탐색
	int nArray[10];
	int* p = &nArray[0];

	for (int i = 0; i < 10; ++i)
		*(p + i) = i;
	

	//예제 12-6 배열을 가리키는 포인터
	long lArray[20];
	long(*p)[20] = &lArray;
	(*p)[3] = 300;

	cout << "lArray[3] = " << lArray[3] << "\n";

	// 예제 12-7 포인터의 배열
	double a, b, c;
	double* pArray[3];

	pArray[0] = &a;
	pArray[1] = &b;
	pArray[2] = &c;
	

	// 예제 12-8 배열을 포함하는 구조체
	StudentInfo si = { "Kim Chol-Su", 200121233, {3.2f, 3.5f} };
	cout << si.name << "\n";
	cout << si.stdNumber << "\n";
	cout << si.grade[0] << ", " << si.grade[1] << "\n";
	

	// 예제 12-9 구조체의 배열
	StudentInfo stdInfos[5] = {
		{"Kim Chol-su", 200121233, {3.2f, 3.5f}},
		{"Lee Chol-Su", 200223517, {4.5f, 4.5f}},
		{"Park Chol-Su", 200321131, {1.7f, 2.0f}},
		{"Yang Chol-Su", 200222289, {0.4f, 4.1f}},
		{"Yoon Chol-Su", 199921444, {2.7f, 2.8f}}
	};

	for (int i = 0; i < 5; ++i)
	{
		cout << stdInfos[i].name << "\n";
		cout << stdInfos[i].stdNumber << "\n";
		cout << stdInfos[i].grade[0] << ", " << stdInfos[i].grade[1] << "\n\n";
	}
	

	// 예제 12-10 구조체를 가리키는 포인터
	Rectangle rc = { 100, 100, 50, 50 };

	Rectangle* p = &rc;
	(*p).x = 200;
	p->y = 250;

	cout << "rc = ( " << rc.x << ", " << rc.y << ", ";
	cout << rc.width << "," << rc.height << ")\n";
	

	// 예제 12-11 포인터를 포함하는 구조체
	long l = 300;
	IHaveAPointer ihap;

	ihap.pl = &l;

	//예제 12-12 서로를 가리키는 구조체 변수들
	Dizzy a, b, c;
	a.id = 1;
	a.p = &b;
	b.id = 2;
	b.p = &c;
	c.id = 3;
	c.p = &a;

	// a만 사용해서 a, b, c에 모두 접근
	cout << "a.id = " << a.id << "\n"; 
	cout << "b.id = " << a.p->id << "\n"; // (*a.p).id와 동일
	cout << "c.id = " << a.p->p->id << "\n";
	cout << "a.id = " << a.p->p->p << "(again)\n";
	*/	
	return 0;
}

