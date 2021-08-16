#include <iostream>
using namespace std;

// 예제 16-5 문자열을 뒤집어서 복사해주는 함수
char* ReverseString(const char* src, int len)
{
	char* reverse = new char[len + 1];
	for (int i = 0; i < len; ++i)
		reverse[i] = src[len - i - 1];

	reverse[len] = NULL;

	return reverse;
}

// 예제 16-6 배열을 사용한 실험
char* ReverseSTring(const char* src, int len)
{
	char reverse[100];

	for (int i = 0; i < len; ++i)
		reverse[i] = src[len - i - 1];

	reverse[len] = NULL;

	return reverse;
}


int main() {
	/*
	// 예제 16-1 입력 값의 평균 구하기
	int size;
	cout << "몇 개의 정수를 입력하시겠소? ";
	cin >> size;

	int* arr = new int[size];

	cout << "정수를 입력하시오.\n";
	for (int i = 0; i < size; ++i)
		cin >> arr[i];

	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	float ave = (float)sum / (float)size;
	cout << "합 = " << sum << ", 평균 = " << ave << "\n";

	delete[] arr;

	// 예제 16-2 new, delete의 사용
	int* p = new int;

	*p = 337;

	delete p;
	

	// 예제 16-3 해제한 메모리를 또 해제하기
	short* p = new short[100];

	cout << "p = " << p << "\n";
	delete[] p;

	cout << "p = " << p << "\n";

	delete[] p;
	
	// 예제 16-3 해제한 메모리를 또 해제하기
	short* p = new short[100];

	cout << "p = " << p << "\n";
	delete[] p;
	p = NULL;

	cout << "p = " << p << "\n";

	delete[] p;
	p = NULL;
	
	// 예제 16-5 문자열을 뒤집어서 복사해주는 함수
	char original[] = "NEMODORI";
	char* copy = ReverseString(original, 8);

	cout << original << "\n";
	cout << copy << "\n";

	delete[] copy;
	copy = NULL;
	*/
	// 예제 16-6 배열을 사용한 실험
	char original[] = "NEMODORI";

	char* copy = ReverseSTring(original, 8);

	cout << original << "\n";
	cout << copy << "\n";
	return 0;
}