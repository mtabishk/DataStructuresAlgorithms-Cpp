#include<bits/stdc++.h>
using namespace std;

int findPairSum(int *arr, int n, int x) {
	int pairs = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == x) {
				pairs++;
			}
		}
	}
	return pairs;
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

	cout << findPairSum(arr, n, x);

	delete [] arr;
	delete arr;

	return 0;
}