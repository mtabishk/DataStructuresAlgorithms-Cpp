#include<bits/stdc++.h>
using namespace std;

bool checkIsWhole(int n) {
	double num = n / 3.0;
	if (num - (int)num == 0.0 && num >= 0) {
		return true;
	}
	return false;
}
int numTriplets(vector<int> arr) {
	int count = 0;
	for (int i = 0; i < arr.size(); i++) {
		int j = i + 1;
		int k = i + 2;
		if (arr[i] < arr[j] && arr[j] < arr[k]) {
			bool isWhole = checkIsWhole(arr[i] + arr[j] + arr[k]);
			if (isWhole) {
				count++;
			}


		}
	}
	return count;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int result;
	result = numTriplets(arr);
	cout << result;
	return 0;
}