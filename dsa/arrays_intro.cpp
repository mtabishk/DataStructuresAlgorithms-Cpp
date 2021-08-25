#include <iostream>
using namespace std;

#define MAX 10

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int arr[MAX];
	int size;
	cin >> size;

	if (size > MAX) {
		cout << "Overflow";
		return 0;
	}

	// input array elements
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}


	while (size < MAX) {
		int element;
		cin >> element;

		// inserting element in the array
		for (int i = 0; i < size ; i++) {
			arr[size - i] = arr[size - i - 1];
		}
		arr[0] = element;
		size++;
	}
	cout << "Overflow" << endl;

	// output array elements
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}