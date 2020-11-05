// 2D Arrays --> Combination of many rows
// For storing address of each row, we have to create pointers.
// All these pointers can be stored in an array --> Array of pointers
// Double pointer (**) is used to store address of Array of pointers
#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int rows, cols;
	cin >> rows >> cols;

	// allocating 2d array on heap
	int **p = new int* [rows];
	for (int i = 0; i < rows; i++) {
		*(p + i) = new int [cols];   // *(p+i) == p[i]
	}

	// assigning values to elements in 2d arrays
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cin >> *(*(p + i) + j); // *(*(p+i)+j) == p[i][j]
		}
	}

	// Adding 10 to each element and printing them
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << *(*(p + i) + j) + 10 << " "; // *(*(p+i)+j) == p[i][j]
		}
		cout << "\n";
	}

	// deallocating memory
	for (int i = 0; i < rows; i++) {
		delete [] p[i];
	}
	delete [] p ;

	return 0;
}