#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int size ;
	cin >> size;

	int *p = new int[size];
	// assign values using p[i] or *(p+i)
	*(p + 0) = 10;



	return 0;
}
