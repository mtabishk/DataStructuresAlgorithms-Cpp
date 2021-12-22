#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
	bool isPrimeNum = true;
	int i = 2;
	while (i < sqrt(num)) {
		if (num % i == 0) {
			isPrimeNum = false;
			break;
		}
		i++;
	}
	return isPrimeNum;
}

void printPrimeTillN(int n) {
	for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	return;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n = 0;
	cin >> n;

	printPrimeTillN(n);

	return 0;
}