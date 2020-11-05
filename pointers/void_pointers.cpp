#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	/* Void Pointer: This type of pointer can point to all types of objects. But it does not know what kind of object it is pointing to. Which means that it cannot be dereferenced directly */
	int a = 10;
	void *ptr = &a;
	// cout << *ptr << endl; This will give error

	// we need to do explicit typecasting
	cout << *(int *)ptr << endl;

	// A void pointer can also be a null pointer.
	// uninitialized pointers are also null pointers.
	void *p = 0;

	return 0;
}