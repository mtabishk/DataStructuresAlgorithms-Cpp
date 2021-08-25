#include <iostream>
using namespace std;

int sum (int a[] , int size) {
	/* size of a will come to be 4 bytes ???
	because in case of functions we are not passing full array
	to the function, we are just passing address of the array
	to the function. So, instead of writing a[] int the parameters, It is better to write int sum (int *a , int size).
	a[i] = *(a+i) */
	cout << "Size of a[] in sum function is: " << sizeof(a) << endl;
	return 0;
}
int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a[] = {10, 20, 30, 40, 50};
	// size of a will be 5*4 = 20 bytes
	cout << "Size of a[] in the main(): " << sizeof(a) << endl;
	int s = sum(a, 10);

	return 0;
}