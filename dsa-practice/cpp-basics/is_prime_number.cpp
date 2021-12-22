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

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int num = 0;
	cin >> num;

	cout << isPrime(num);

	return 0;
}