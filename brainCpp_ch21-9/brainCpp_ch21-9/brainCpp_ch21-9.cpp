# include <iostream>
using namespace std;

class NeedConstructor
{
public:
	const int maxCount;
	int& ref;
	int sample;

	NeedConstructor();
	NeedConstructor(int count, int& number);
};

NeedConstructor::NeedConstructor(int count, int& number)
	: maxCount(count), ref(number)
{
	sample = 200;
}

NeedConstructor::NeedConstructor()
	: maxCount(100), ref(sample)
{
	sample = 200;
}


int main()
{
	int number = 400;

	NeedConstructor cr(300, number);


	cout << "cr.maxCount = " << cr.maxCount << "\n";
	cout << "cr.ref = " << cr.ref << "\n";

	return 0;
}