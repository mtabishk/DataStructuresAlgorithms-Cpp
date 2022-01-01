#include<bits/stdc++.h>
using namespace std;

// leader:
// an array element A[i] is called a leader if all the elements following it (i.e., present at its right) are less than or equal to A[i]

int findLeader(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		int curr = arr[i];
		for (int j = i + 1; j < n; j++) {
			if (curr >= arr[j]) {
				if (j = n - 1) {
					return curr;
				} else {
					continue;
				}

			} else {
				break;
			}
		}

	}
	return -1;
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

	cout << findLeader(arr, n);
	return 0;
}