#include<bits/stdc++.h>
using namespace std;

void printArrayNTimes(int **arr, int rows, int cols) {

	for (int i = 0; i < rows; i++) {
		int count = 1;
		while (count <= rows - i) {
			for (int j = 0; j < cols; j++) {
				cout << arr[i][j] << " ";
			}
			count++;
		}
	}
	return;
}


int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int rows = 0, cols = 0;
	cin >> rows >> cols;

	// memory allocation
	int **arr = new int*[rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	// input
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> arr[i][j];
		}
	}

	printArrayNTimes(arr, rows, cols);

	// memory deallocation
	for (int i = 0; i < rows; i++) {
		delete [] arr[i];
	}
	delete [] arr;
	delete arr;

	return 0;
}