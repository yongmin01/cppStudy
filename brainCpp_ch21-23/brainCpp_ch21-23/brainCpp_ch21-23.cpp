#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	string name;
	int sNo;

	// 생성자, 소멸자
	Student(const string& name_arg, int stdNumber);
	~Student();

public:
	// 정적 멤버들
	static int student_count;
	static void PrintStdCount();

};

// 정적 멤버 변수
int Student::student_count = 0;

// 정적 멤버 함수
void Student::PrintStdCount()
{
	cout << "Student 객체 수 = " << student_count << "\n";
}

Student::Student(const string& name_arg, int stdNumber)
{
	student_count++;

	name = name_arg;
	sNo = stdNumber;
}

Student::~Student()
{
	student_count--;
}

void Func()
{
	Student std1("Bill", 342);
	Student std2("James", 214);

	Student::PrintStdCount();
}

int main()
{
	Student::PrintStdCount();

	Student std("Jeffrey", 123);

	Student::PrintStdCount();

	Func();

	Student::PrintStdCount();

	return 0;
}