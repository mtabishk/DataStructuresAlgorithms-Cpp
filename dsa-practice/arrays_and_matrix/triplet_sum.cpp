#include<bits/stdc++.h>
using namespace std;

int findTripletSum(int *arr, int n, int x) {
	int triplets = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (arr[i] + arr[j] + arr[k] == x) {
					triplets++;
				}
			}
		}
	}
	return triplets;
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

	cout << findTripletSum(arr, n, x);

	delete [] arr;
	delete arr;

	return 0;
}