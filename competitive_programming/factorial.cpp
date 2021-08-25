#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
	if (n <= 1 ) return 1; // factorial(1) == 1
	cout << n << endl;
	int smallOutput = factorial(n - 1);
	return n * smallOutput;
}

int main() {
	//freopen("input.txt", "r", "stdin");
	//freopen("output.txt", "w", "stdout");
	int n = 0;
	cin >> n;
	cout << factorial(n) << endl;
	return 0;
}