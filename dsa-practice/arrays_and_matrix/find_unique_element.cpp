// n = 2*m+1
// where m elements are duplicate abd only 1 element is unique

#include<bits/stdc++.h>
using namespace std;

int findUniqueElement(int *arr, int n) {
	sort(arr, arr + n);

	int i = 0;
	while (i < n) {
		if (arr[i] == arr[i + 1]) {
			i += 2;
			continue;
		}
		return arr[i];
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

	cout << findUniqueElement(arr, n);

	delete [] arr;
	delete arr;

	return 0;
}

