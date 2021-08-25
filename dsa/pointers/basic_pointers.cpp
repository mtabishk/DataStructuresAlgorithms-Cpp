// Pointers Introduction

#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int i = 10;
	int *p = &i;

	cout << "Address of int varible i = " << &i << endl;
	cout << "Address of pointer to int p = " << &p << endl;
	cout << "Value Stored in int i = " << i << endl;
	cout << "Value Stored in pointer to int p = " << p << endl;
	cout << "Deferencing (*)pointer to int p = " << *p << endl;

	cout << "------------------------------------" << endl;

	cout << "Size of int varible i= " << sizeof(i) << endl;
	cout << "Size of pointer to int p = " << sizeof(p) << endl;

	return 0;
}
