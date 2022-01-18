#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
	int curr_sum = 0;
	int max_sum = INT_MIN;

	// traverse the array
	for (int i = 0; i < n; i++) {
		curr_sum += arr[i];
		if (curr_sum > max_sum) {
			max_sum = curr_sum;
		}

		if (curr_sum < 0) {
			curr_sum = 0;
		}

	}
	return max_sum;

}

int main() {
	int n = 0;
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << maxSubarraySum(arr, n);

	delete [] arr;
	delete arr;


	return 0;
}