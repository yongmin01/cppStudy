#include <iostream>
using namespace std;

class AccessControl
{
public:
	char publicData;
	void publicFunc() {}

protected:
	int protectedData;
	void protectedFunc() {}
	
private :
	float privateData;
	void privateFunc() {}

public:
	void AccessAllMembers();
};

void AccessControl::AccessAllMembers()
{
	publicData = 'A';
	publicFunc();
	protectedData = 100;
	protectedFunc();
	privateData = 4.5f;
	privateFunc();
}


int main()
{
	AccessControl ac;

	ac.AccessAllMembers();

	return 0;
}