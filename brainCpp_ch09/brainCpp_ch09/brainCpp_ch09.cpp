#include <iostream>
using namespace std;

int main() {
	// 예제 9-10 NULL 문자의 중요성
	// 그냥 문자의 배열
	char ThisIsNotString[] = { 'H', 'e', 'l', 'l', 'o' };

	// 문자열
	char ThisIsString[] = { 'H', 'e',' l', 'l', 'o', '\0' };
	
	cout << ThisIsNotString << "\n";
	cout << ThisIsString << "\n";

	// 예제 9-11 문자열 리터럴의 사용
	char cArray1[] = "ABCDE";
	char cArray2[] = { 'A', 'B', 'C', 'D', 'E', 0};

	cout << "sizeof(cArray1) = " << sizeof(cArray1) << "(Bytes)\n";
	cout << "sizeof(cArray2) = " << sizeof(cArray2) << "(bytes)\n";

	cout << cArray1[4] << (int)cArray1[5] << "\n";
	cout << cArray2[4] << (int)cArray2[5] << "\n";

	// exercise 9-2
	char example[] = "scientia est potentia";
	for (int i = sizeof(example) / sizeof(example[0]) - 1; i >= 0; --i) {
		cout << example[i];
	}

	cout << "\n";
	int arr1[10];
	cout << "arr1[5] = " << arr1[5] << endl;
	int arr2[10] = { 1, 2, 3, 4, 5 };
	cout << "arr2[5] = " << arr2[5] << endl;

	
	char c[5];

	double d[3];
	short s[4];
	cout << "sizeof(c) = " << sizeof(c) / sizeof(c[0]) << "\n";
	//cout << "sizeof(char c[] = " << sizeof(c) / sizeof(c[0]) << "\n";
	//cout << "sizeof(d) = " << sizeof(d) << "\n";
	cout << "sizeof(s) = " << sizeof(s) / sizeof(s[0]) << "\n";

	return 0;
}