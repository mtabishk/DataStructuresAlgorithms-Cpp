#include<bits/stdc++.h>
using namespace std;

void arrangeNums(int *arr, int n) {
	sort(arr, arr + n);

	int *tempArr = new int[n];

	int si = 0;
	int ei = n - 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			tempArr[ei] = arr[i];
			ei--;
		} else {
			tempArr[si] = arr[i];
			si++;
		}
	}
	for (int i = 0; i < n; i++) {
		arr[i] = tempArr[i];
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	delete [] tempArr;
	delete tempArr;

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

	arrangeNums(arr, n);

	delete [] arr;
	delete arr;

	return 0;
}