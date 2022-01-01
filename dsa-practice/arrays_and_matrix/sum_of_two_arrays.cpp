#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return;
}

void sumTwoArrays(int *arr1, int n1, int *arr2, int n2) {

	int n = max(n1, n2) + 1; // +1 for the carry
	int *arr = new int[n];

	int index = n - 1;
	int carry = 0;
	int i = n1 - 1;
	int j = n2 - 1;
	for (i, j; i >= 0, j >= 0; i--, j--) {
		cout << "i= " << i << "j= " << j << "\n";
		// sum of elements of two arrays
		int sum = arr1[i] + arr2[j] + carry;
		int digit = sum;
		if (sum > 9) {
			digit = sum % 10;
			carry = sum / 10;
		} else {
			carry = 0;
		}
		arr[index] = digit;
		index--;

	}

	int rem = n1 > n2 ? i : j;
	int *remarr = n1 > n2 ? arr1 : arr2;

	while (rem >= 0) {
		int sum = remarr[rem] + carry;
		int digit = sum;
		if (sum > 9) {
			digit = sum % 10;
			carry = sum / 10;
		} else {
			carry = 0;
		}
		arr[index] = digit;
		index--;
		rem--;
	}
	arr[index] = carry;



	printArray(arr, n);

	delete [] arr;
	delete arr;
	return;
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n1 = 0;
	cin >> n1;

	int *arr1 = new int[n1];
	for (int i = 0; i < n1; i++) {
		cin >> arr1[i];
	}

	int n2 = 0;
	cin >> n2;

	int *arr2 = new int[n2];
	for (int i = 0; i < n2; i++) {
		cin >> arr2[i];
	}


	sumTwoArrays(arr1, n1, arr2, n2);

	delete [] arr1;
	delete arr1;
	delete [] arr2;
	delete arr2;

	return 0;
}