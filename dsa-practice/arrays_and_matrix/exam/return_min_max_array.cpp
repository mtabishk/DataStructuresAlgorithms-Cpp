#include<bits/stdc++.h>
using namespace std;


pair<int, int> findMinMax(int *arr, int n) {
	int max = INT_MIN;
	int min = INT_MAX;

	for (int i = 0; i < n; i++) {
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}

	return pair<int, int>(min, max);
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int size = 0;
	cin >> size;

	int *arr = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	pair<int, int> p = findMinMax(arr, size);
	cout << p.first << " " << p.second;

	delete [] arr;
	delete arr;

	return 0;
}