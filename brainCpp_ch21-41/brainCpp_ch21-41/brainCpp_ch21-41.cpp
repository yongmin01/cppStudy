#include <iostream>
#include <string>
using namespace std;


class Student
{
public:
	string name;
	int sNo;

	void Print();

private:
	// 생성자
	Student(const string& name_arg, int stdNumber);

public:
	// 정적 멤버
	static int studentNumber;
	static Student* CreateStudent(const string& name_arg);
};

int Student::studentNumber = 0;

Student* Student::CreateStudent(const string& name_arg)
{
	// 학생 객체를 생성한다
	Student* p = new Student(name_arg, studentNumber++);

	return p;
}

Student::Student(const string& name_arg, int stdNumber)
{
	name = name_arg;
	sNo = stdNumber;
}

void Student::Print()
{
	cout << "{Name = " << name << ", Std. Num. = " << sNo << "}\n";
}
int main()
{
	Student* p1, * p2, * p3;
	p1 = Student::CreateStudent("이계희");
	p2 = Student::CreateStudent("이춘훈");
	p3 = Student::CreateStudent("윤수연");

	p1->Print();
	p2->Print();
	p3->Print();

	delete p1;
	delete p2;
	delete p3;
	p1 = p2 = p3 = 0;
	return 0;
}