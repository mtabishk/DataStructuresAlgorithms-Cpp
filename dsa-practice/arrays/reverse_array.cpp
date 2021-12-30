#include<bits/stdc++.h>
using namespace std;

void reverseArray(int *arr, int n) {
	int si = 0, ei = n - 1;
	while (si < ei) {
		int temp = arr[si];
		arr[si] = arr[ei];
		arr[ei] = temp;
		si++;
		ei--;
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

	reverseArray(arr, n);

	delete [] arr;
	delete arr;

	return 0;
}