#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int x = 36 / SQUARE(6);
	cout << x;

	return 0;
}