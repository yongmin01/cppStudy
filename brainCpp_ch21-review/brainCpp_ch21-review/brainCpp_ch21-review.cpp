#include <iostream>
#include <string>
using namespace std;


class Dummy
{
public:
	string s1 = "생성자";
	string s2 = "복사 생성자";

	Dummy();
	Dummy(const Dummy& dm);
	~Dummy();

};
Dummy::Dummy()
{
	cout << s1 << endl;
}
Dummy::Dummy(const Dummy& dm)
{
	cout << dm.s2 << endl;
}
Dummy::~Dummy()
{
	cout << "소멸자" << endl;
}
int main()
{
	cout << "d1 생성" << endl;
	Dummy d1;
	cout << "d2 생성" << endl;
	Dummy d2 = d1;
	cout << "끝" << endl;
	return 0;
}
