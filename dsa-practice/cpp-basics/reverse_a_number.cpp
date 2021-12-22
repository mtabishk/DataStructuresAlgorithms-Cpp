#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int num = 0;
	int rev = 0;
	cin >> num;

	while (num > 0) {
		int lastDigit = num % 10;
		num = num / 10;
		rev = rev * 10 + lastDigit;
	}
	cout << rev;
	return 0;
}