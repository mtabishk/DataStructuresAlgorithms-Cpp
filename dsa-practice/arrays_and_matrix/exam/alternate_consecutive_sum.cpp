#include<bits/stdc++.h>
using namespace std;

int countDigit(int n) {
	int count = 0;
	while (n != 0) {
		n = n / 10;
		++count;
	}
	return count;
}

int sumDigitsRaisedPower(int n, int z) {
	int sum = 0;
	while (n != 0) {
		int d = n % 10;
		n = n / 10;
		sum = sum + pow(d, z);
	}
	return sum;
}

bool isPrime(int n) {
	if (n <= 1)
		return false;

	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}

int count(int x) {
	int c = 0;
	for (int a = 0; a <= x; a++) {
		int z = countDigit(a);
		int s = sumDigitsRaisedPower(a, z);
		if ((countDigit(s) == z) && isPrime(s)) {
			c++;
		}
	}
	return c;
}

int main() {
	int x;
	cin >> x;
	int result;
	result = count(x);
	cout << result;

	return 0;
}