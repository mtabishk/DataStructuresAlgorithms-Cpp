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

int findLCM(int num1, int num2) {
	/// a*b = GCD(a,b) * LCM(a,b)
	/// LCM(a,b) = (a*b) / GCD(a,b)
	int gcd = findGcd(num1, num2);

	return (num1 * num2) / gcd;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int num1, num2;
	cin >> num1 >> num2;

	cout << findLCM(num1, num2);

	return 0;
}