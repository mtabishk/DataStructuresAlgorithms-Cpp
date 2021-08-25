#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	// allocating memory on the heap
	int *pa = new int [n];

	cout << pa << endl;

	for (int i = 0; i < n; i++) {
		cin >> *(pa + i);
	}

	int max = -9999999;
	for (int i = 0; i < n; i++) {
		if (max < * (pa + i) ) {
			max = *(pa + i);
		}
	}

	cout << "Max element in array: " << max << endl;

	// releasing memory on the heap
	delete [] pa;

	/* here only memory allocated on heap is released but the pointer is not deleted. because we created pointer in the main and its created in the stack memory */

	// if now this pointer is not modified then still it will point to same memory address
	cout << pa << endl;

	return 0;
}