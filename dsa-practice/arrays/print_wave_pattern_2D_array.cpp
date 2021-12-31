#include<bits/stdc++.h>
using namespace std;

void printWavePattern(int **arr, int rows, int cols) {
	for (int j = 0; j < cols; j++) {
		if (j % 2 == 0) {
			// print top-down
			for (int i = 0; i < rows; i++) {
				cout << arr[i][j] << " ";
			}
		} else {
			// print bottom-up
			for (int i = rows - 1; i >= 0; i--) {
				cout << arr[i][j] << " ";
			}
		}

	}
	return;
}
int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int rows = 0, cols = 0;
	cin >> rows >> cols;

	int **arr = new int*[rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> arr[i][j];
		}
	}

	printWavePattern(arr, rows, cols);


	for (int i = 0; i < rows; i++) {
		delete [] arr[i];
	}
	delete [] arr;
	delete arr;

	return 0;
}