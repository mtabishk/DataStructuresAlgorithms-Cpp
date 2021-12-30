#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return;
}

void pushAllZerosToEnd(int *arr, int n) {
	int ei = n - 1;
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] == 0) {
			int temp = arr[i];
			int j = i;
			for (j; j < ei; j++) {
				// left shift
				arr[j] = arr[j + 1];
			}
			arr[j] = temp;
			ei--;

		}
	}
	cout << printArray(arr, n);
	return;
}


int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = 0;
	cin >> n;

	int *arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	pushAllZerosToEnd(arr, n);

	delete [] arr;
	delete arr;
	return 0;
}