#include <iostream>
using namespace std;

bool is_sorted(int a[], int size) {
	if (size == 0 || size == 1)
		return true;

	if (a[0] > a[1])
		return false;

	bool isSmallSorted = is_sorted(a + 1, size - 1);
	return isSmallSorted;
}

int main() {
	int a[] = {10, 20, 30, 40, 50};
	cout << is_sorted(a, 5) << endl;


	return 0;
}