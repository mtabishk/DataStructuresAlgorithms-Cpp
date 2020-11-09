#include <iostream>

class Polynomial {
public:

	int *degCoeff;
	int capacity;

	// Default Constructor;
	Polynomial () {
		degCoeff = new int[10];
		capacity = 10;
		for (int i = 0; i < 10; i++) {
			degCoeff[i] = 0;
		}
	}

	// copy constructor
	Polynomial(const Polynomial &p) {
		degCoeff = new int[p.capacity];
		for (int i = 0; i < p.capacity; i++) {
			degCoeff[i] = p.degCoeff[i];
		}
		capacity = p.capacity;
	}

	// copy assignment operator
	void operator=(const Polynomial &p) {
		delete [] degCoeff;
		degCoeff = new int[p.capacity];
		for (int i = 0; i < p.capacity; i++) {
			degCoeff[i] = p.degCoeff[i];
		}
		capacity = p.capacity;
	}

	// set coefficient function
	void setCoefficient(int degree, int coeff) {
		if (degree >= capacity) {
			int size = 2 * capacity;
			while (size <= degree) {
				size *= 2;
			}
			int *newDegCoeff = new int[size];
			for (int i = 0; i < size; i++) {
				newDegCoeff[i] = 0;
			}
			for (int i = 0; i < capacity; i++) {
				newDegCoeff[i] = degCoeff[i];
			}
			capacity = size;
			delete [] degCoeff;
			degCoeff = newDegCoeff;
		}
		degCoeff[degree] = coeff;
	}

	// print function
	void print() {
		for (int i = 0; i < capacity; i++ ) {
			if (degCoeff[i] != 0) {
				std::cout << degCoeff[i] << "x" << i << " ";
			}
		}
		std::cout << std::endl;
	}

	// Overloading + operator
	Polynomial operator+ (const Polynomial &p) {
		Polynomial pNew;
		int i = 0;
		int j = 0;
		while (i < this->capacity && j < p.capacity) {
			int deg = i;
			int coeff = this -> degCoeff[i] + p.degCoeff[j];
			pNew.setCoefficient(deg, coeff);
			i++;
			j++;
		}
		while (i < capacity) {
			pNew.setCoefficient(i, degCoeff[i]);
			i++;
		}
		while (j < capacity) {
			pNew.setCoefficient(j, degCoeff[j]);
			j++;
		}
		return pNew;
	}

	// Overloading - operator
	Polynomial operator- (const Polynomial &p) {
		Polynomial pNew;
		int i = 0;
		int j = 0;
		while (i < this->capacity && j < p.capacity) {
			int deg = i;
			int coeff = this -> degCoeff[i] - p.degCoeff[j];
			pNew.setCoefficient(deg, coeff);
			i++;
			j++;
		}
		while (i < capacity) {
			pNew.setCoefficient(i, degCoeff[i]);
			i++;
		}
		while (j < capacity) {
			pNew.setCoefficient(j, degCoeff[j]);
			j++;
		}
		return pNew;
	}

	// get coefficient function
	int getcoefficient(int degree) const {
		if (degree >= capacity) {
			return 0;
		}
		return degCoeff[degree];
	}

	Polynomial operator* (Polynomial p) {
		Polynomial pNew;

		for (int j = 0; j < p.capacity; j++) {
			for (int i = 0; i < capacity; i++) {
				int deg = i + j;
				int coeff = pNew.getcoefficient(deg) + (this-> degCoeff[i] * p.degCoeff[j]);
				pNew.setCoefficient(deg, coeff);
			}
		}
		return pNew;
	}

};