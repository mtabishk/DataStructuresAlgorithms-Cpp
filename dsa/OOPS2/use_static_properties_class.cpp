#include "static_properties_class.cpp"
#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	Student s1;
	cout << s1.roll_no << " " << s1.age << endl;

	cout << Student :: totalStudents << endl;

	cout << s1.totalStudents << endl;
	return 0;
}