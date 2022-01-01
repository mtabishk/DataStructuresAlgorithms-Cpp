#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return;
}

void reverseArray(int *arr, int si, int ei) {
	while (si < ei) {
		// swap
		int temp = arr[si];
		arr[si] = arr[ei];
		arr[ei] = temp;
		si++;
		ei--;
	}
	return;
}

void rotateArrayByD(int *arr, int n, int d) {
	reverseArray(arr, 0, n - 1);
	// reverse n-d
	reverseArray(arr, 0, n - d - 1);
	// reverse d
	reverseArray(arr, n - d, n - 1);

	// print array
	printArray(arr, n);

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

	int d = 0;
	cin >> d;

	rotateArrayByD(arr, n, d);

	delete [] arr;
	delete arr;

	return 0;
}