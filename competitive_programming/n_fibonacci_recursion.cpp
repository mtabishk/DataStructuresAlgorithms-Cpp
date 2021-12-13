#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
	// base condition
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}

	// assumption
	int smallOutput1 = fibonacci(n - 1);
	int smallOutput2 = fibonacci(n - 2);

	// calculation
	int output = smallOutput1 + smallOutput2;

	return output;

}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n = 0;
	cin >> n;
	cout << fibonacci(n) << endl;


	return 0;
}