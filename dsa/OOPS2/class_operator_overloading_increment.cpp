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
		int j = min(numerator, denominator);
		for (int i = 1; i <= j; i++) {
			if (numerator % i == 0 && denominator % i == 0) {
				gcd = i;
			}

		}
		numerator = numerator / gcd;
		denominator = denominator / gcd;
	}
	// pre-increment
	Fraction& operator++() {
		numerator = numerator + denominator;
		Simplify();
		return *this;
	}

	//post-increment
	Fraction operator++(int) {
		Fraction fNew(numerator, denominator);
		numerator = numerator + denominator;
		Simplify();
		fNew.Simplify();

		return fNew;
	}
};