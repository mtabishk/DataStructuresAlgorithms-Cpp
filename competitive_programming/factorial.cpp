#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
	// base case
	if (n <= 1 ) return 1; // factorial(1) == 1
	// assuming f(n-1) will work
	int smallOutput = factorial(n - 1);
	// solving actual problem
	int output = n * smallOutput;
	return output;
}

int main() {
	//freopen("input.txt", "r", "stdin");
	//freopen("output.txt", "w", "stdout");
	int n = 0;
	cin >> n;
	cout << factorial(n) << endl;
	return 0;
}