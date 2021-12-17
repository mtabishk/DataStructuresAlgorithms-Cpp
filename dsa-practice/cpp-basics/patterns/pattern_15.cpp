///    1
///   121
///  12321
/// 1234321

/// Break into two parts
///    1
///   12 1
///  123 21
/// 1234 321

#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n) {
	for (int i = 1; i <= n; i++) {
		// loop for spaces
		for (int k = 1; k <= n - i; k++ ) {
			cout << " ";
		}

		int j = 1;
		for (j ; j <= i; j++) {
			cout << j;
		}

		for (int k = j - 2 ; k >= 1; k--) {
			cout << k;
		}
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