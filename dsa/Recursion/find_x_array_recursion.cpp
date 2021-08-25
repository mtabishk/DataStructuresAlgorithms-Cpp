#include <iostream>
using namespace std;

// If the element is found then return the index of that element else return -1

int index_in_array(int a[], int size, int x) {
	if (size == 0)
		return -1;

	if (a[0] == x)
		return 0;

	int index = index_in_array(a + 1, size - 1, x);

	if (index == -1)
		return -1;
	else
		return index + 1;
}

int main() {

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int a[] = {10, 20, 30, 40, 50};
	cout << index_in_array(a, 5, 40);

	return 0;
}