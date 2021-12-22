#include<bits/stdc++.h>
using namespace std;

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n = 0;
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	bool increasing = false;
	bool decreasing = false;
	int countIncreasing = 0;
	int countDecreasing = 0;
	for (int i = 0; i < n - 1; i++) {

		// strictly increasing/decreasing
		if (countIncreasing > 1 || countDecreasing > 1) {
			break;
		}
		if (arr[i] <= arr[i + 1]) {
			if (!increasing) {
				countIncreasing++;
			}
			increasing = true;
			decreasing = false;
		} else if (arr[i] > arr[i + 1]) {
			if (!decreasing) {
				countDecreasing++;
			}
			increasing = false;
			decreasing = true;
		}
	}
	if (countIncreasing <= 1 && countDecreasing <= 1) {
		cout << "1";
	} else {
		cout << "0";
	}

	delete [] arr;
	delete arr;
	return 0;
}