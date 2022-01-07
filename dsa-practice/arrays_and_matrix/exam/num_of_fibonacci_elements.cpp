#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x) {
	int s = sqrt(x);
	return (s * s == x);
}

bool isFibonacci(int n) {

	return isPerfectSquare(5 * n * n + 4) ||
	       isPerfectSquare(5 * n * n - 4);
}

int numFibonacci(vector<int> arr) {
	int count = 0;
	for (int i = 0; i < arr.size(); i++) {
		bool result = false;
		result = isFibonacci(arr[i]);
		if (result) {
			count++;
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
	result = numFibonacci(arr);
	cout << result;

	return 0;
}