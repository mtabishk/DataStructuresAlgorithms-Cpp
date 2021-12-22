#include<bits/stdc++.h>
using namespace std;

long int reverseNumber(long int num) {
	long int rev = 0;
	while (num > 0) {
		int lastDigit = num % 10;
		num = num / 10;
		rev = rev * 10 + lastDigit;
	}
	return rev;
}


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int decimal = 0;
	long int binary = 0;

	cin >> decimal;

	int pv = 1; // pv: place value ...1000 100 10 1
	while (decimal > 0) {
		int rem = decimal % 2;
		decimal = decimal / 2;
		binary = binary + rem * pv;
		pv *= 10;
	}
	cout << binary << "\n";
	cout << reverseNumber(binary);
	return 0;
}