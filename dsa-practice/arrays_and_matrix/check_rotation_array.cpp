#include<bits/stdc++.h>
using namespace std;

int checkArrayRotation(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] > arr[i + 1]) {
			return n - (i + 1);
		}
	}
	return -1;
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

	cout << checkArrayRotation(arr, n);

	delete [] arr;
	delete arr;

	return 0;
}