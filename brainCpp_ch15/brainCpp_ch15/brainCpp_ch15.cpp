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
*/
// 예제 15-5 함수의 포인터 기본
void Dog()
{
	cout << "I'm a dog.\n";
}
void Cat()
{
	cout << "I'm a cat.\n";
}



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
	*/
	// 예제 15-5 함수의 포인터 기본
	void(*p) ();

	p = &Dog;
	(*p)();
	p = &Cat;
	(*p)();

	return 0;
}