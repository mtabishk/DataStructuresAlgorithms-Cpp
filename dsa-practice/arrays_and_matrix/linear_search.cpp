#include<bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int n, int search) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == search) {
			return i;
		}
	}
	return -1;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n = 0;
	cin >> n;

	int *arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int search = 0;
	cin >> search;

	cout << linearSearch(arr, n, search);

	delete [] arr;
	delete arr;

	return 0;
}