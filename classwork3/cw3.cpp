#include <iostream>
using namespace std;

class Student
{
	char *name;
	int age;
public:
	Student(const char *n, int a)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		age = a;
	}
	void Print()
	{
		cout << "Name: " << name << "\tAge: " << age << endl;
	}
	~Student()
	{
		cout << "Destruction\n";
		delete[] name;
	}
};

int main()
{
	Student obj1("Oleg", 19);
	obj1.Print();
}