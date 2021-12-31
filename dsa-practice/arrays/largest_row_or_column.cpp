#include<bits/stdc++.h>
using namespace std;

void printLargestRowColumnSum(int **arr, int n) {
	int maxRowSum = 0;
	int maxColSum = 0;
	int rowNo = -1;
	int colNo = -1;

	// check row sums
	for (int i = 0; i < n; i++) {
		int currSum = 0;
		for (int j = 0; j < n; j++) {
			currSum += arr[i][j];
		}
		if (currSum > maxRowSum) {
			maxRowSum = currSum;
			rowNo = i;
		}
	}

	// check col sums
	for (int j = 0; j < n; j++) {
		int currSum = 0;
		for (int i = 0; i < n; i++) {
			currSum += arr[i][j];
		}
		if (currSum > maxColSum) {
			maxColSum = currSum;
			colNo = j;
		}
	}

	if (maxRowSum > maxColSum) {
		cout << "Row: " << rowNo + 1 << "\t" << "Sum: " << maxRowSum ;
	} else {
		cout << "Column: " << colNo + 1 << "Sum: " << maxColSum ;
	}

}


int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n = 0;
	cin >> n;

	// memory allocation
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

	printLargestRowColumnSum(arr, n);

	// memory deallocation
	for (int i = 0; i < n; i++) {
		delete [] arr[i];
	}
	delete [] arr;
	delete arr;


	return 0;
}