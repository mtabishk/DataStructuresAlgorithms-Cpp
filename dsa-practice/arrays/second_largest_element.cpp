#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(int *arr, int n) {
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	int secMax = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > secMax && arr[i] < max) {
			secMax = arr[i];
		}
	}
	return secMax;
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

	cout << secondLargestElement(arr, n);

	delete [] arr;
	delete arr;

	return 0;
}