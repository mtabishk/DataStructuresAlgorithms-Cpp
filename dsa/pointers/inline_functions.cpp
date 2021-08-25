#include <iostream>
using namespace std;

inline max (int a , int b) {
	return (a > b) ? a : b;
}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cout << max(10, 20) << endl;
	return 0;
}
