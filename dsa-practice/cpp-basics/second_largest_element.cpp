#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// sorts in decreasing order
	sort(arr, arr + n, greater<int>());

	// second element : second largest element in the array
	cout << arr[1];

	delete [] arr;
	delete arr;

	return 0;
}