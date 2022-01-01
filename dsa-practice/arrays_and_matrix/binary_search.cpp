#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int n, int element) {
	int start = 0;
	int end = n - 1;

	while (start <= end) {
		int mid = (start + end) / 2;
		if (element == arr[mid]) {
			return mid;
		} else if (element < arr[mid]) {
			end = mid - 1;
		} else if (element > arr[mid]) {
			start = mid + 1;
		}
	}


	return -1;
}

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n = 0;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int x = 0;
	cin >> x;

	cout << binarySearch(arr, n, x);

	delete [] arr;
	delete arr;

	return 0;
}