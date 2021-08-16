# include <iostream>
using namespace std;
/*
// 예제 15-1 디폴트 인자의 사용
bool SetFramePerSec(int fps = 10)
{
	return true;
}

// 예제 15-2 무작정 자기 자신을 호출하는 함수
void RecursiveCall()
{
	RecursiveCall();
}

// 예제 15-3 재귀 호출 끝내기
void WhilePositive(int n)
{
	cout << "n = " << n << "\n";

	if (n < 0)
		return;
	WhilePositive(n - 1);
	cout << "n = " << n << "\n";
}

// 예제 15-4 재귀 호출을 이용한 2진수로의 변환
void Convert2Bin(int dec)
{
	if (dec <= 0)
		return;
	Convert2Bin(dec / 2);

	cout << dec % 2;
}

// 예제 15-5 함수의 포인터 기본
void Dog()
{
	cout << "I'm a dog.\n";
}
void Cat()
{
	cout << "I'm a cat.\n";
}

// 예제 15-6 자기 스스로 환경을 비교하는 경우
void ForWindows9x();
void ForWindowsNT();
bool IsWindows9x();
void ImportantFunc();
*/
//  예제 15-7 함수의 포인터를 사용한 개선
typedef void (*SYSTEM_FUNC) ();

void ForWindows9x();
void ForWindowsNT();
bool IsWindows9x();
void ImportantFunc(SYSTEM_FUNC pfnSyst);



int main() {
	/*
	// 예제 15-1 디폴트 인자의 사용
	SetFramePerSec();
	
	// 예제 15-2 무작정 자기 자신을 호출하는 함수
	RecursiveCall();
	
	// 예제 15-3 재귀 호출 끝내기
	WhilePositive(10);
	
	// 예제 15-4 재귀 호출을 이용한 2진수로의 변환
	Convert2Bin(13);
	cout << "\n";
	
	// 예제 15-5 함수의 포인터 기본
	void(*p) ();

	p = &Dog;
	(*p)();
	p = &Cat;
	(*p)();
	
	// 예제 15-6 자기 스스로 환경을 비교하는 경우
	ImportantFunc();
	*/
	//  예제 15-7 함수의 포인터를 사용한 개선
	SYSTEM_FUNC pfn;

	if (IsWindows9x())
		pfn = &ForWindows9x;
	else
		pfn = &ForWindowsNT;

	ImportantFunc(pfn);

	return 0;
}


// 예제 15-6 자기 스스로 환경을 비교하는 경우, 15-7 함수의 포인터를 사용한 개선
void ForWindows9x()
{
	cout << "Windows 9x용 함수가 호출됨\n";
}

void ForWindowsNT()
{
	cout << "Windows NT/2000/XP용 함수가 호출됨\n";
}

bool IsWindows9x()
{
	return false;
}
/*
void ImportantFunc()
{
	if (IsWindows9x())
		ForWindows9x();
	else
		ForWindowsNT();

	if (IsWindows9x())
		ForWindows9x();
	else
		ForWindowsNT();
}
*/
// 예제 15-7 함수의 포인터를 사용한 개선
void ImportantFunc(SYSTEM_FUNC pfnSyst)
{
	(*pfnSyst) ();

	(*pfnSyst) ();
}