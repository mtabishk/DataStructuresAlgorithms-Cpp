#include <iostream>
using namespace std;

int lastIndex(int a[], int size, int x) {
	if (size == 0) {
		return -1;
	}

	int index  = lastIndex(a + 1, size - 1, x);

	if ( index == -1) {
		if (a[0] == x) {
			return 0;
		} else {
			return -1;
		}
	} else {
		return index + 1;
	}
}
int main() {

	//freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a[] = {10, 20, 30, 40, 50};
	cout << "Last Index= " << lastIndex(a, 5, 10) << endl;

	return 0;
}