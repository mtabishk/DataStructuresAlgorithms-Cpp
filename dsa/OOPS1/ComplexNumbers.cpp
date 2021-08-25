class ComplexNumbers {
private:
	int real , imag;
public:
	ComplexNumbers(int real , int imag) {
		this->real = real;
		this->imag = imag;
	}

	void plus(const ComplexNumbers& c2) {
		this->real = this->real + c2.real;
		this->imag = this->imag + c2.imag;
	}

	void print() {
		std::cout << this->real << " + i" << this->imag;
	}

	void multiply(const ComplexNumbers& c2) {
		// (a + bi)*(c + di) = (a*c – b*d) + (a*d + b*c)i
		int real_part = (this->real * c2.real) - (this->imag * c2.imag);
		int imag_part = (this->real * c2.imag) + (this->imag * c2.real);

		this->real = real_part;
		this->imag = imag_part;
	}
};