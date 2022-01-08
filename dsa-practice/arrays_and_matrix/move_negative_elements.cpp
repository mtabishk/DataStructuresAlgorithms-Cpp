#include<bits/stdc++.h>
using namespace std;

void moveNegativeElements(int *arr, int n) {
	int si = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			int temp = arr[si];
			arr[si] = arr[i];
			arr[i] = temp;
			si++;
		}
	}
	return;
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

	moveNegativeElements(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	delete [] arr;
	delete arr;

	return 0;
}