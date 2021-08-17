#include <iostream>
// 예제 17-1~3
#include <cstring>
#include <string>
#pragma warning(disable:4996)
using namespace std;

/*
// exercise 17-1
int mylen(const char* str);

// exercise 17-2
bool IsTermOfAbuse(const char* pChatMessage);
*/



int main() {
	/*
	// 예제 17-1 문자열의 복사
	char src[] = "Hanbit-Media";

	int len = strlen(src);

	// exercise 17-1
	// int len = mylen(src);

	char* dest = new char[len + 1];

	strcpy(dest, src);

	cout << "src = " << src << "\n";
	cout << "dest = " << dest << "\n";

	delete[] dest;
	dest = NULL;
	
	// 예제 17-2 결합한 문자열을 비교하기
	char str1[20] = "abcde";
	char str2[] = "fghij";

	strcat(str1, str2);

	if (strcmp(str1, "abcdefghij") == 0)
		cout << "str1 and \"abcdefghij\" are identical.\n";

	if (strcmp("123456", str1) != 0)
		cout << "\"123456\" and str1 are NOT identical.\n";

	// exercise 17-2
	char chatMessage [] = "병신";
	
	// 예제 17-3 C++에서의 char*의 의미
	char c = 'A';

	char s[] = "This is a string.";

	cout << s << "\n";
	cout << &s[0] << "\n";

	cout << &c << "\n";
	
	// 예제 17-4 문자열의 생성
	string s = "C++ Style~";
	
	cout << s << "\n";
	
	// 예제 17-5 문자열의 복사
	string src = "Hanbit-Media";
	string desc;
	desc = src;

	cout << "src = " << src << "\n";
	cout << "desc = " << desc << "\n";
	
	// 예제 17-6 문자열의 길이
	string s1;
	string s2 = "123";
	string s3 = "abcdefg";
	
	cout << "s1 = " << s1.size() << "\n";
	cout << "s2 = " << s2.size() << "\n";
	cout << "s3 = " << s3.size() << "\n";
	
	// 예제 17-7 문자열의 결합과 비교
	string str1 = "abcde";
	string str2 = "fghij";

	str1 = str1 + str2;

	if (str1 == "abcdefghij")
		cout << "str1 and \"abcdefghij\" are identical.\n";

	if ("123456" != str1)
		cout << "\"123456\" and str1 are NOT identical.\n";
	
	// 예제 17-8 문자열의 검색
	string text = "Napster's pay-to-play service is officially out,"
		"and we have a review of the now-legit Napster. "
		"We also size up its companion music player from Samsung.";

	cout << "Offset of 'official' = " << text.find("official") << "\n";
	
	// 예제 17-9 문자열의 일부분 얻기
	string path = "c:\\My Document\\Pictures\\33.jpg";

	int len = path.size();

	string ext = path.substr(len - 3, 3);

	cout << "extention = " << ext << "\n";
	
	// 예제17-10 C 스타일에서 C++ 스타일로의 형변환
	char cstyle[] = "Are you a string, too?";
	string cppstyle;
	cppstyle = cstyle;

	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";
	
	// 예제 17-11 C 스타일에서 C++ 스타일로의 변환 - 테스트
	char cstyle[] = "Are you a string, too?";
	string cppstyle;
	cppstyle = cstyle;

	cppstyle[0] = 'B';

	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";
	
	// 예제 17-12 string 객체에서 C 스타일의 문자열 얻기
	string cppstyle = "Yes, I am.";
	const char* cstyle = NULL;

	cstyle = cppstyle.c_str();

	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";
	
	// 예제 17-13 C++ 스타일에서 C 스타일로의 변환
	string cppstyle = "Yes, I am.";
	char* cstyle = new char[cppstyle.size() + 1];
	strcpy(cstyle, cppstyle.c_str());

	cstyle[0] = 'z';

	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";

	delete[] cstyle;
	cstyle = NULL;
	
	// 예제 17-14 간단한 문자열의 입력
	char cs[20];
	string cpps;

	cin >> cs;
	cin >> cpps;

	cout << "cs = " << cs << "\n";
	cout << "cpps = " << cpps << "\n";
	*/
	// 예제 17-15 getline() 함수를 사용한 문자열 입력
	char cs[20];
	string cpps;

	cin.getline(cs, 20);
	getline(cin, cpps);

	cout << "cs = " << cs << "\n";
	cout << "cpps = " << cpps << "\n";

	return 0;
}
/*
// exercise 17-1
int mylen(const char* str) {
	int i = 0;
	int s = 0;
	while (true)
	{
		if (str[i] == NULL)
			break;
		else {
			s += 1;
			i += 1;
		}
	}
	return s;
}

// exercise 17-2
bool IsTermOfAbuse(const char* pChatMessage)
{
	char badMessages[] = { "바보", "병신", "나쁜 애", "미친 애" };
	for (int i = 0; i < 4; i++)
	{
		if (strcmp(pChatMessage, badMessages[i]) == 0)
			return true;
		else
			return false;
	}

}
*/