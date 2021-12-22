///    *
///   ***
///  *****
///   ***
///    *

/// Break into two parts
///    *
///   ***
///  *****

///   ***
///    *

#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n) {
	int spaces = ((n + 1) / 2) - 1;
	for (int i = 1; i <= (n + 1) / 2; i++) {
		// loop for spaces
		for (int k = 1; k <= spaces; k++ ) {
			cout << " ";

		}
		spaces--;
		for (int j = 1 ; j <= 2 * i - 1; j++) {
			cout << "*";

		}
		cout << "\n";
	}
	int star = n - 2;
	for (int i = 1; i <= n / 2; i++) {
		// loop for spaces
		for (int k = 1; k <= i; k++ ) {
			cout << " ";

		}

		for (int j = star ; j >= 1  ; j--) {
			cout << "*";
		}
		star -= 2;
		cout << "\n";
	}
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n = 0;
	cin >> n;
	print_pattern(n);
	return 0;
}