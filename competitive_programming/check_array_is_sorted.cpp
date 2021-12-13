#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(int *a , int size ) {
	if (size == 0 || size == 1) {
		return true;
	}

	if (a[0] > a[1]) {
		return false;
	}

	bool isSmallSorted = isArraySorted(a + 1, size - 1);
	return isSmallSorted;
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int a[] = {10, 20, 30, 40, 50};
	int size = 5;
	cout << isArraySorted(a, size);

	return 0;
}
