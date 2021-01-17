#include <string>
#include <iostream>
using namespace std;

class Teacher {
public:
	string name = "Hannah";
	int age = 38;

	void print() {
		cout << "Name of Teacher: " << name;
		cout << "Age of the Teacher: " << age;
	}
};

class Student : public Teacher {
public:
	Student(string sname) {
		cout << "Student name: " << sname;
		cout << "Teacher name: " << name;
		cout << "Teacher Age: " << age;
	}

};