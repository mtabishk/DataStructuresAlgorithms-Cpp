#include "class_operator_overloading_increment.cpp"
#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	Fraction f1(10, 2);
	Fraction f3 = ++(++f1);
	f1.print();
	f3.print();

	cout << "+---------+" << endl;
	Fraction f4 = ++f1;
	f1.print();
	f4.print();

	cout << "+---------+" << endl;
	Fraction f5 = f1++;
	f1.print();
	f5.print();
	return 0;
}