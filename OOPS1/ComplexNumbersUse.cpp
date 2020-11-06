#include <iostream>
#include "ComplexNumbers.cpp"
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int real1, imag1, real2, imag2;

	cin >> real1 >> imag1;
	cin >> real2 >> imag2;

	ComplexNumbers c1(real1, imag1);
	ComplexNumbers c2(real2, imag2);

	int choice;
	cin >> choice;

	if (choice == 1) {
		c1.plus(c2);
		c1.print();
	} else if (choice == 2) {
		c1.multiply(c2);
		c1.print();
	} else {
		return 0;
	}

}