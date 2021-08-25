#include <iostream>
using namespace std;

int main() {

	//#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//#endif

	int m, n;
	cin >> m >> n;

	// Initialising 2d array on the Heap
	int **p = new int* [m];
	for (int i = 0; i < m; i++) {
		*(p + i) = new int[n];
	}

	// Assigning values to 2d array on heap
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> p[i][j];
		}
	}
	// Printing values to 2d array on heap
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << p[i][j] << " ";
		}
		cout << "\n";
	}

	// de-allocating the memory
	for (int i = 0; i < m; i++) {
		delete [] p[i];
	}
	delete [] p;

	return 0;
}