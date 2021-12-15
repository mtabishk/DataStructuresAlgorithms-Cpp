#include<bits/stdc++.h>
using namespace std;

int findGcd(int num1, int num2) {

	while (num2 != 0) {
		// rem : remainder
		int rem = num1 % num2;
		num1 = num2;
		num2 = rem;
	}
	return num1;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int num1, num2;
	cin >> num1 >> num2;

	cout << findGcd(num1, num2);

	return 0;
}