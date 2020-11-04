#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int *p;
	// It will point to any garbage
	cout << "Value inside a simple pointer= " << p << endl;


	// Null Pointer
	int *n = 0;
	cout << "Value inside Null Pointer= " << n << endl;
	/* If value inside null pointer is 0. It means the pointer does not point to any memory location */

	return 0;
}