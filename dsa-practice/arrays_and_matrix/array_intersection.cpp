#include<bits/stdc++.h>
using namespace std;

void findArrayIntersection(int *arr1, int n1, int *arr2, int n2) {
	sort(arr1, arr1 + n1);
	sort(arr2, arr2 + n2);

	int n = n1 < n2 ? n1 : n2;

	int *arr = new int[n];

	int i = 0, j = 0, k = 0;
	while (i < n1 && j < n2) {
		if (arr1[i] == arr2[j]) {
			arr[k] = arr1[i];
			i++;
			j++;
			k++;
		} else if (arr1[i] < arr2[j]) {
			i++;
		} else if (arr1[i] > arr2[j]) {
			j++;
		}
	}

	for (int i = 0; i < k; i++) {
		cout << arr[i] << " ";
	}

	delete [] arr;
	delete arr;

}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n1 = 0, n2 = 0;
	cin >> n1;

	int *arr1 = new int[n1];
	int *arr2 = new int[n2];

	for (int i = 0; i < n1; i++) {
		cin >> arr1[i];
	}

	cin >> n2;
	for (int i = 0; i < n2; i++) {
		cin >> arr2[i];
	}

	findArrayIntersection(arr1, n1, arr2, n2);

	delete [] arr1;
	delete [] arr2;
	delete arr1;
	delete arr2;

	return 0;
}