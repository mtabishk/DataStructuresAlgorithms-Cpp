#include<bits/stdc++.h>
using namespace std;

void printSpiralPattern(int **arr, int n) {
	int rowStart = 0;
	int colStart = 0;
	int rowEnd = n - 1;
	int colEnd = n - 1;
	bool evenAdd = true;
	bool oddAdd = true;
	for (int count = 0; count < 2 * n - 1; count++) {
		// even iteration
		if (count % 2 == 0) {
			if (evenAdd) {
				for (int j = colStart; j <= colEnd; j++) {
					cout << arr[rowStart][j] << " ";
				}
				rowStart++;

			} else {
				for (int j = colEnd; j >= colStart; j--) {
					cout << arr[rowEnd][j] << " ";
				}
				rowEnd--;

			}
			evenAdd = !evenAdd;

			// odd iteration
		} else if (count % 2 != 0) {
			if (oddAdd) {
				for (int i = rowStart; i <= rowEnd; i++ ) {
					cout << arr[i][colEnd] << " ";
				}
				colEnd--;
			} else {
				for (int i = rowEnd; i >= rowStart; i-- ) {
					cout << arr[i][colStart] << " ";
				}
				colStart++;
			}

			oddAdd = !oddAdd;

		}
	}
}

void printMatrix(int **arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " " ;
		}
		cout << "\n";
	}
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	// allocate memory
	int **arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	// take input
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	printSpiralPattern(arr, n);


	// deallocate memory
	for (int i = 0; i < n; i++) {
		delete [] arr[i];
	}
	delete [] arr;
	delete arr;

	return 0;
}