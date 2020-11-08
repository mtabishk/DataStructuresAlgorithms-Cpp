#include <iostream>
using namespace std;

class Fraction {
private:
	int numerator;
	int denominator;
public:
	Fraction(int numerator, int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
	}

	void print() {
		cout << numerator << " / " << denominator << "\n";

	}

	void Simplify () {
		int gcd = 1;
		int j = std::min(numerator, denominator);
		for (int i = 1; i <= j; i++) {
			if (numerator % i == 0 && denominator % i == 0) {
				gcd = i;
			}

		}
		numerator = numerator / gcd;
		denominator = denominator / gcd;
	}

	Fraction& operator++() {
		numerator = numerator + denominator;
		Simplify();
		return *this;
	}
};