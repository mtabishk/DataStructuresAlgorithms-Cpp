#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int binary = 0;
	int decimal = 0;

	cin >> binary;

	int power = 0;
	while (binary > 0) {
		int lastDigit = binary % 10;
		binary = binary / 10;
		decimal = decimal + pow(2, power) * lastDigit;
		power++;
	}

	cout << decimal;
	return 0;
}