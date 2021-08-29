#include <iostream>
using namespace std;

class WhoAmI
{
public:
	int id;

	WhoAmI(int id);
	void ShowYourself() const;

	/*
	// 예제 21-45 정적 멤버 함수는 this 포인터가 없다
	static void TestThis();
	*/
};

/*
// 예제 21-45 정적 멤버 함수는 this 포인터가 없다
void WhoAmI::TestThis()
{
	cout << "this = " << this << "\n";
}
*/

WhoAmI::WhoAmI(int id)
{
	this->id = id;
}
void WhoAmI::ShowYourself() const
{
	cout << "{ID = " << id << ", this = " << this << "}\n";
}

int main()
{
	WhoAmI obj1(1);
	WhoAmI obj2(2);
	WhoAmI obj3(3);

	obj1.ShowYourself();
	obj2.ShowYourself();
	obj3.ShowYourself();

	cout << "&obj1 = " << &obj1 << "\n";
	cout << "&obj2 = " << &obj2 << "\n";
	cout << "&obj3 = " << &obj3 << "\n";

	return 0;
}