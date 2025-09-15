#include <iostream>
using namespace std;

class Student
{
	char* name;
	char* surname;
	int age;
public:
	Student(const char *n, const char *s, int a)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		surname = new char[strlen(s) + 1];
		strcpy_s(surname, strlen(s) + 1, s);
		age = a;
	}
	void Print()
	{
		cout << "Name: " << name << "\tsurname: " << surname << "\tAge: " << age << endl;
	}
	~Student()
	{
		cout << "Destruction\n";
		delete[] surname;
		delete[] name;
	}
};

int main()
{
	Student obj1("Oleg", "Petrovich", 19);
	obj1.Print();
}