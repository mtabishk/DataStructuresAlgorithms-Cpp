#include<bits/stdc++.h>
using namespace std;

void swapAlternateElements(int *arr, int n) {
	int i = 0;
	while (i <= n - 2) {
		int temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
		i += 2;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

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

	swapAlternateElements(arr, n );

	return 0;
}