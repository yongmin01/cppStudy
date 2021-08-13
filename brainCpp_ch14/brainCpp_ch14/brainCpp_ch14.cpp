#include <iostream>
// 예제 14-17 sqrt()와 pow() 함수의 사용
#include <cmath>
using namespace std;
/*
// 예제 14-5 반환 갑의 사용
int Three() {
	return 3;
}

// 예제 14-7 펙토리얼을 구하는 함수
int Factorial(int n);


// 예제 14-8, 9 인자 전달의 규칙,인자 전달의 메모리 구조
int max(int a, int b)
{
	return a > b ? a : b;
}

// exercise 14-3
int mid(int a, int b, int c, int d, int e)
{
	int arr[5] = { a, b, c, d, e };
	for (int i = 0; i < 5; i++)
	{
		if (arr[i])
	}
}

// 예제 14-10 결과 값을 인자로 받아오기
void GCD_LCM(int a, int b, int gcd, int lcm)
{
	int z;
	int x = a;
	int y = b;
	while (true)
	{
		z = x % y;
		if (0 == z)
			break;
		x = y;
		y = z;
	}
	gcd = y;
	lcm = a * b / gcd;
}

// 예제 14-11 포인터를 이용한 해결
void GCD_LCM(int a, int b, int* pgcd, int* plcm)
{
	int z;
	int x = a;
	int y = b;
	while (true)
	{
		z = x % y;
		if (0 == z)
			break;
		x = y;
		y = z;
	}
	*pgcd = y;
	*plcm = a * b / *pgcd;
}

// 예제 14-12 구조체를 사용한 반환
struct RetValues
{
	int retValue1;
	int retValue2;
};

RetValues PlusMinus(int a, int b)
{
	RetValues ret;
	ret.retValue1 = a + b;
	ret.retValue2 = a - b;

	return ret;
}

// 예제 14-13 레퍼런스를 이용한 해결
void GCD_LCM(int a, int b, int& gcd, int& lcm)
{
	int z;
	int x = a;
	int y = b;
	while (true)
	{
		z = x % y;
		if (0 == z)
			break;
		x = y;
		y = z;
	}
	gcd = y;
	lcm = a * b / gcd;
}

// 예제 14-14 기본적인 배열의 전달
void UsingArray(char arr[]);

// 예제 14-15 이차원 배열의 전달
void Using2DArray(int arr[][3]);
*/
// 예제 14-16 기본적인 구조체의 전달, 14-18 두 점의 거리를 구하는 함수 완성
struct  Point
{
	int x, y;
};

double Distance(Point p1, Point p2);


int main() {
	/*
	// 예제 14-5 반환 갑의 사용
	int ret;

	ret = Three();

	cout << "ret = " << ret << "\n";
	
	// 예제 14-7 펙토리얼을 구하는 함수
	int result;
	result = Factorial(5);

	cout << "5! 는 " << result << "입니다.\n";

	
	// 예제 14-8 인자 전달의 규칙
	int ret = max(3, 5);
	

	// 예제 14-9 인자 전달의 메모리 구조
	int arg1 = 3;
	int arg2 = 5;
	int ret = max(arg1, arg2);
	
	// 예제 14-10 결과 값을 인자로 받아오기
	int gcd = 0;
	int lcm = 0;
	GCD_LCM(28, 35, gcd, lcm);

	cout << "GCD = " << gcd << "\n";
	cout << "LCM = " << lcm << "\n";
	
	// 예제 14-11 포인터를 이용한 해결
	int gcd = 0;
	int lcm = 0;
	GCD_LCM(28, 35, &gcd, &lcm);

	cout << "GCD = " << gcd << "\n";
	cout << "LCM = " << lcm << "\n";
	
	// 예제 14-12 구조체를 사용한 반환
	RetValues result;
	result = PlusMinus(3, 5);

	cout << "3 + 5 = " << result.retValue1 << "\n";
	cout << "3 - 5 = " << result.retValue2 << "\n";
	
	// 예제 14-13 레퍼런스를 이용한 해결
	int gcd = 0;
	int lcm = 0;
	GCD_LCM(28, 35, gcd, lcm);

	cout << "GCD = " << gcd << "\n";
	cout << "LCM = " << lcm << "\n";
	
	// 예제 14-14 기본적인 배열의 전달
	char array[20] = "Hello, World!";
	
	UsingArray(array);
	// 가상의 코드
	// char* arr = array; 1번
	// char* arr = &array[0]; 1번을 풀어쓴 것


	cout << "In main() : " << array << "\n";
	
	// 예제 14-15 이차원 배열의 전달
	int array[5][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14 ,15} };
	Using2DArray(array);
	*/
	// 예제 14-16 기본적인 구조체의 전달, 14-18 두 점의 거리를 구하는 함수 완성
	Point a = { 0, 0 };
	Point b = { 3, 4 };

	double dist_a_b = Distance(a, b);

	cout << "(" << a.x << "," << a.y << ") 와";
	cout << "(" << b.x << "," << b.y << ") 의 거리 = " << dist_a_b << "\n";
	
	/*
	// 예제 14-17 sqrt()와 pow() 함수의 사용
	double sqrt_2 = sqrt(2.0);
	double pow_12_2 = pow(12, 2);

	cout << "2의 제곱근 = " << sqrt_2 << "\n";
	cout << "12의 제곱 = " << pow_12_2 << "\n";
	*/

	return 0;
}


/*
int Factorial(int n) {
	int result = 1;

	for (int i = 1; i <= n; ++i)
		result *= i;

	return result;
}

// 예제 14-14 기본적인 배열의 전달
void UsingArray(char arr[])
{
	cout << "In UsingArray() : " << arr << "\n";
	arr[12] = '?';
}

// 예제 14-15 이차원 배열의 전달
void Using2DArray(int arr[][3])
{
	for (int i = 0; i < 5; ++i)
		for (int j = 0; j < 3; ++j)
			cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\n";
}
*/
// 예제 14-16 기본적인 구조체의 전달, 14-18 두 점의 거리를 구하는 함수 완성
double Distance(Point p1, Point p2)
{
	double distance;
	distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

	return distance;
}